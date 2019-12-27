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


**************************************************************************************************************************
main.cpp
//用函数指针，实现加减乘除运算
#include <iostream>
#include "io.h"
using namespace std;

int main()
{    
    //定义函数指针
    double (*ptrCalc)(double,double);  //C++11中可以使用auto ptrfunc = addition;
    //自动判断类型（自动类型推断需要确保变量的类型与处置类型一样）
    //相当于 auto prtCalc = addtion;
    double num1,num2;
    char op;
    cout<<"please enter two figures";
    cin>>num1>>num2;
    cout<<"please enter the calculate sign:";
    cin>>op;
    switch(op)
    {
case'+':
    ptrCalc=addition;
    break;
case'-':
    ptrCalc=subtraction;
    break;
case'*':
    ptrCalc=multiplication;
    break;
case'/':
    ptrCalc=division;
    break;
    }
    print_result(ptrCalc,num1,num2);


    return 0;
}

io.h
#ifndef IO_H_INCLUDED
#define IO_H_INCLUDED
#include <iostream>
using namespace std;
//要使用函数指针，要先定义函数
double addition(double,double);
double subtraction(double,double);
double multiplication(double,double);
double division(double,double);

//print the result of calculate
void print_result(double(*)(double,double),double,double);
//有三个参数，double(*)(double,double)为函数指针，有两个参数double
//再传两个参数给它
//打印结果时把函数参数当做一个指针传进去

void print_result(double(*ptrCalc)(double,double),double num1,double num2) //函数的实现
{
//调用函数，打印结果
double result = ptrCalc(num1,num2);
cout<<"运算结果为："<<result<<endl;
}
double addition(double num1,double num2)
{
  return num1+num2;
}

double subtraction(double num1,double num2)
{
  return num1-num2;
}

double multiplication(double num1,double num2)
{
  return num1*num2;
}

double division(double num1,double num2)
{ if(num2==0)
 {
  cout<<"wrong!"<<endl;
  return 0;
 }
  return num1/num2;
}



#endif // IO_H_INCLUDED
