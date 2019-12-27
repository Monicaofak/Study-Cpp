main.cpp
//函数指针
//函数的地址是存储其机器语言代码的内存开始地址
//好处：可以在不同的时间使用不同的函数（可以把函数当做参数传递）
//函数指针的声明：
//函数原型
//double sun(double,double);
//函数指针声明：
//double(*ptrSum)(double,double)  小括号+*+函数指针名
//如果没写括号
//double *ptrSum(double,double)   声明一个函数ptrSum,返回double类型的指针
#include <iostream>
#include "jk.h"
using namespace std;
void change(int &num)
{
  num++;
}
int main()
{
    //int power(int,int);
    //声明函数指针-ptrPower
    int(*ptrPower)(int,int);   //相当于int* ptrInt;
    //让声明的函数指针指向函数，以便调用
    ptrPower = power;

    cout<<power(3,4) <<endl;
    cout<<ptrPower(3,4)<<endl;

  return 0;
 }
 
 
 
 
 jk.h
 #ifndef FUNCPRT_H_INCLUDED
#define FUNCPRT_H_INCLUDED

int power(int,int);

int power(int num1,int num2)
{
  int result = 1;
  for(int i=0;i<num2;i++)
  {
  result*=num1;
  }
  return result;
}

#endif // FUNCPRT_H_INCLUDED

