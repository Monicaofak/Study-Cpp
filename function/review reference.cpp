//引用 为某个对象起另外一个名字
#include <iostream>
using namespace std;
int main()
 {
 int int_value=1024;
 int& refValue=int_value;    //后面操作二者其实是操作同一个
 //引用必须初始化，不能直接引用常量（自变量）double& d=12.3 错
 const double& d=12.3;  //对（指向常量的引用）
 //使用引用的时候，不需要测试其有效性，所以使用引用比使用指针的效率要高一些
 //当数据所占内存比较大时，建议使用引用参数
 //将引用变量用作参数时，函数将使用原始函数，而非副本
 cout<<refValue<<endl;
 cout<<d<<endl;
 }

//三个版本实现两个变量交换
//使用引用的理由：
//1.可以更加简便的书写代码  2.可以直接传递某个对象，而不只是把对象复制一份
#include <iostream>
using namespace std;
void swap1(int,int);
void swap2(int*,int*);
void swap3(int&,int&);
void show(int&,int&);

int main()
 {
 int num1=10,num2=5;
 cout<<"after swap1 "<<num1<<'\t'<<num2<<endl;
 //交换了但是没有变，因为传普通变量是按副本传递
 swap2(&num1,&num2);
 cout<<"after swap2 "<<num1<<'\t'<<num2<<endl;
 swap3(num1,num2);
 cout<<"after swap3 "<<num1<<'\t'<<num2<<endl;  //swap2与swap3实现逻辑一样
 cout<<"after show:"<<num1<<'\t'<<num2<<endl;
 }
void swap1(int num1,int num2)
 {
 int temp;
 temp=num1;
 num1=num2;
 num2=temp;
 }
void swap2(int* p1,int* p2)
 {
 int temp;
 temp=*p1;
 *p1=*p2;
 *p2=temp;
 }
void swap3(int& ref1,int& ref2)
 {
 //直接传一个别名过来，与传本人没有区别
 int temp;
 temp=ref1;
 ref1=ref2;
 ref2=temp;
 }
void show(const int& num1,const int& num2)
 {
 //我们希望显示函数中，只能实现传入参数的显示功能，而禁止显示函数修改num1和num2的值
 //（禁止函数内部修改引用参数值）
 //解决方案：在参数中使用const
 }
