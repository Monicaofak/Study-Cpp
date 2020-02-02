//按值传递的机制
//给函数传递参数时，参数值不会直接传递给函数，而是先制作参数的副本，存储在栈上
//，再使这个副本可用于函数，而不是使用初值

#include <iostream>
using namespace std;
void change(int);
int main()
{
 int num = 9;  
 change(num);   //把9复制到num的位置
 cout<<"num="<<num<<endl  //实际是把change空间里面的num加了，所以此处打印值不变
 return 0;
}

void change (int num)  //此处int num 与上面int num占的是两块空间修改的是void change中的变量
{
num++;     
}

#include <iostream>
using namespace std;
void change(int &num)  //传递引用过来（把指针传过来了）
{
   num++;
}
int main()
{
   int num=10;
   change(num);
   cout<<"num="<<num<<endl;
   return 0;
}


********************************************************************************************************************************
//自行完成删除修改数组
main.cpp
#include <iostream>
#include <cmath>
#include "gongzhudemon.h"
using namespace std;
int main()
{
   int values[5];
   //input(values,sizeof(values)/sizeof(int));
   input(values,5);
   print(values,5);
}


gongzhudemon.h
#ifndef GONGZHUDEMON_H_INCLUDED
#define GONGZHUDEMON_H_INCLUDED
//using function 升级公主游戏中的基本录入属性与排序功能
//基本属性：体力、智力、魅力、道德、气质
#include <iostream>
#inclue <string>
using namespace std;
void input(int [],int);   //函数定义
void print(int [],int);
void input(int values[],int len)  //函数实现  传递数组实际是传递数组的指针，所以把数组长度也传过来
{
   if(len > 5)
   {
   cout<<"数组长度只能是5以内！"<<endl;
   return;  //退出返回值为void的函数
   }
   string valueNames[] = {"体力","智力","魅力","道德","气质"};
   for(int i = 0;i                                                                                                         <len;i++ )
   {
   cout<<valueNames[i]<<":";
   cin>>values[i];
   }

}
   void print(int values[],int len)
   {
   string valueNames[] = {"体力","智力","魅力","道德","气质"};
   for(int i=0;i<len;i++)
   {
   cout<<valueNames[i]<<":"<<values[i]<<endl;
   }
   }
#endif // GONGZHUDEMON_H_INCLUDED

********************************************************************************************************************************
//数组作为函数实参时，只传递数组的地址（首地址），并不传递整个数组的空间
//当用数组名作为实参调用函数时，数组首地址指针就被传递到函数中
//数组容易 被乱改
// void show(const int valueArray[],int len)
// void show(const int *valueArray[],int len)
#include <iostream>
using namespace std;
void show(int[],int);
int main()
{
  int valueArray[] = {90,56,67,89,100};
  show(valueArray,5);
  show(valueArray,5);
}

void show(int valueArray[],int len)
{
for(int i = 0;i < len;i++)
{
cout<<valueArray[i]++<<",";
}
cout<<endl;
}

//解决：使用const关键字
#include <iostream>
using namespace std;
void show (const int*,const int*); //定义指针为常量，只能打印，不能修改
int main()
{
  int valueArray[] = {90,56,67,89,100};
  show(valueArray,valueArray+4);
}
  void show(const int*begin,const int* end)
  {
  for(const int*ptr=begin;ptr <=end;ptr++)
  {
  cout<<*ptr<<",";
  }
  }

*********************************************************************************************************************************
//使用二维数组作参数
#include <iostream>
using namespace std;
void show(double(*)[5],int);
int main()
{
 double powers[3][5]={
   {45.5,55.6,88.9,66.6,78},
   {98.2,69.1,33.7,49.3,58},
   {78.2,58.5,12.8,37.8,43}
   };
   show(powers,3);
   }

void show(double(*arr)[5],int len)
 {
 for(int i = 0;i< len;i++){
    for(int j=0;j<5;j++){
        cout<<arr[i][j]<<",";
    }
    cout<<endl;
 }
 }

