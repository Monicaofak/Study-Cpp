//reference: 引用：给对象起了一个别名
#include <iostream>
using namespace std;
int main()
{
   // refValue执行int_value,是int_value的另一个名字
   //引用的同时必须初始化，所以使用引用之前不需要测试其有效性，因此使用引用可能比使用指针效率高
   //如 int * num = &abc 还要验证地址是否存在，有可能是假地址 而引用就直接是别名
   //引用不是对象，只是为已经存在的对象起别名
   //引用只能绑定在对象上，不能与计算值或某个表达式结果绑定在一起
   //int &ref_value =10;错误
   //指向常量的引用是非法的
   //double& ref = 100; 错误  指向变量的引用
   //const double& ref = 100; 正确  //表示引用时一个常量类型的引用
   //引用和指针的关系：
   //引用队指针进行了简单的封装，底层仍然是指针
   //获取引用地址时，编译器会进行内部转换
  //引用必须声明，不可以直接引用常量（自变量）
  //double& d=12.3 错误 
  // const double& d=12,3；正确（指向常量的引用时合法的）
 //我们使用引用时不需要测试其有效性，因为定义时就指向了有效内存空间，而指针有可能指向无效内存
 //所以使用引用效率较高
//将引用变量用作参数时，函数将使用原始数据，而非副本
   int num = 108;
   int& rel_num = num;
   rel_num = 118;
   cout<<&num<< '\t' << &rel_num <<endl;
   //真正的运行机制：
   //int num =108;
   //int* rel_num = &num;
   //*real_num = 118;
   //cout << &num<< '\t' <<rel_num <<endl;
}


**************************************************************************************************************************
#include <iostream>
using namespace std;
void swap1(int,int);
void swap2(int*,int*);
void swap3(int&,int&);
void show(const int&,int&);   //在参数中直接使用const 避免修改
int main()
 {
  int num1 = 10,num2 =5;
  swap1(num1,num2);  //传普通变量时是按副本传递，分别把10 和5的副本给了新的参数
  cout<<"执行swap1后："<<num1<<'\t'<<num2<<endl;
  swap2(&num1,&num2);  //取了num1和num2的地址按副本的方式传给p1和p2
  cout<<"执行swap2后："<<num1<<'\t'<<num2<<endl;
  swap3(num1,num2);
  cout<<"执行swap3后："<<num1<<'\t'<<num2<<endl;
  return 0;
}

void swap1(int num1,int num2)
{
 int temp;
 temp =num1;
 num1 =num2;
 num2 =temp;
}

void swap2(int* p1,int* p2)
{
 int temp;
 temp = *p1;  //p1与p2本身的值不变，他们所指向的地址的值变了
 *p1 = *p2;
 *p2 = temp;
}

void swap3(int& ref1,int& ref2)
{
    //1.可以更加简便的书写代码
    //2.可以直接传递某个对象，而不只是把对象复制一份
  
int temp;
temp = ref1;
ref1 = ref2;
ref2 = temp;
}

void show(int& num1,int& num2)  //风险：引用的参数可能被无意修改
{
  //希望显示函数中，只能实现传入参数的显示功能，而禁止显示函数修改num1和num2
  //解决：在参数中直接使用const
  cout<<"执行swap后："<<num1<<'\t'<<num2<<endl;
}

****************************************************************************************************************************************
//引用作为函数返回值
//不要返回局部变量的引用
#include <iostream>
using namespace std;

  int& sum()//返回引用类型的函数
  {
  int num = 10;
  //rNum是在sum函数中定义的，所以是局部变量，生存期只在sum函数中
  int &rNum =num;
  //函数中的局部变量会被内存回收
  //所谓内存回收不是把内存保存的数据清零，
  //而是指内存中你的程序申请的这块内存已经不是你的了
  return rNum; //返回了一个局部引用类型变量
  }

  void test()
  {
  int x=1;
  int z=1024;
  }
int main()
{  
  //result 在这里引用了一个局部变量
  int& result = sum();
  test();  //调用其他函数
  cout <<"result ="<<result<<endl;
  return 0;
}


*****************************************************************************************************************************************

//函数可以不返回值，默认返回传入的引用对象本身（默认返回你的参数）
#include <iostream>
using namespace std;

int& sum(int& num1,int& num2)
{
num1++;
num2++;//没有返回值，但是返回了16，默认返回的实际是它最后一个修改的参数
//return num1+num2;函数中返回引用必须返回传参的引用，要么num1，要么num2
}
int main()
{
int num1 = 10, num2 = 15;
int& result = sum(num1,num2);
cout<<"result="<<result<<endl;
}



#include <iostream>
using namespace std;
int& sum(int& num)
{
num++;
return num;
}
int main()
{
int num = 10;
int& result = sum(num);  //result和sum是一个东西，所以修改sum的时候result的值也改了
sum(num) = 55;
cout<<"result="<<result<<endl;
}
//将返回类型修改为const int& const int& sum(int& num){...}
//const类型为不可修改的左值，sum(num)=55将不合法
//省略const会使函数的含义更加模糊，建议避免在设计函数中存在模糊的情况，因为模糊会增加犯错机会
//使用引用参数的指导原则
//能够修改调用函数中的数据对象
//数据对象较大时传递引用可以提高程序的运行效率
//函数中不需要修改传递的参数
//1.如果数据对象较少，建议按值传递
//2.传递数组只能使用指针，并使用const关键字  数组不能使用引用传递
//3.较大的对象则使用const指针或引用，以提高程序的效率
//函数中需要修改传递的参数
//1.数据对象时基本对象或结构时，可以使用指针或引用
//2.数据对象是数组时只能使用指针
//3.数据对象是类对象时 ，要求使用引用


#include <iostream>
using namespace std;
string chatTo(const string& toName,const string& content);
string chatFrom(const string& fromName,const string& content);
//模拟实现游戏中山私聊的函数
int main()
{
   string toName,content,chatMsg;
   cout<<"please enter the name of the other side:";
   getline(cin,toName);
   cout<<"please enter the massage to the other side:";
   getline(cin,content);
   chatMsg = chatTo(toName,content);
   cout<<endl<<chatMsg<<endl;
}

string chatTo(const string& toName,const string& content)
{
   string massage ="⊙你悄悄地对["+toName+"]说"+content;
   return massage;

}
