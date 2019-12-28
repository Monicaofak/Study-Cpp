#include <iostream>
using namespace std;
void sample(int = 10);   //int是一个数据类型的占位符，10作为该占位符的默认值
int main()
{
  sample();    //既可以给它传参数，也可以传一个有默认整型的参数
  sample(123);
}

void sample(int num)
{
cout<<num<<endl;
}
//默认值可以在函数原型或定义中给出，但不能在这两个位置同时给出
//对于带参数列表的函数，必须从右向左添加默认值
// 如：void test1(int a,int b = 5,int c=10);
//void test2(int a,int b= 5 ;int c); 错误
//调用时：test(1);或test(1,2);
