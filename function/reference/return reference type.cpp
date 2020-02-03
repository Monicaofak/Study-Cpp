//不要返回局部变量的引用
#include <funcptr.h>
#include <iostream>
using namespace std;

int& sum() //返回引用类型的函数
 {
 int num=10;
 int& rNum=num; //rNum是在sum函数中定义的，所以叫局部变量，其生命周期只在sum函数中
 return rNum; //返回一个局部引用类型变量
 }

void test()
 {
 int x=1;
 int y=2;
 int z=1024;  //出错了，什么都没改，只是在另一个函数里定义了几个变量
 //因为，函数中的局部变量会被内存回收，所谓内存回收，并不是把内存保存的数值清零，而是
 //内存中把程序申请的这块内存已经不是你的了
 }
int main()
 {
 int& result = sum();  //result在这里也是引用了一个局部变量，也是引用了num
 test(); //调用其他函数
 cout<<"result="<<result<<endl;
 }


//函数可以不返回值，默认返回传入的引用对象本身
//返回引用时，要求函数参数中包含被返回的引用对象
#include <iostream>
using namespace std;
int main()
 {
 int num1=10,num2=15;
 int& result=sum(num1,num2);
 cout<<"result="<<result<<endl;
 }

int& sum(int& num1,int& num2)
 {
 num1++;
 num2++;
 //没有返回值,默认返回最后一个更新的引用
 }
