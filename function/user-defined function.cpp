//function
//内置函数（STL\Boost C++）
//STL标准模板库，里面包含了很多高效的C++程序库  Boost可移植的，提供了源代码的C++库
//自定义函数
//three factor of function:return_type \ name of function \  the list of parameter.
//函数原型（有返回值、包含的参数描述了编译器到函数的接口）  函数调用  函数定义  函数实现的代码
//函数原型与函数定义头部类似，但函数原型最后以分号结尾，函数定义没有分号
//函数原型的参数名可省，但要写类型
//返回值类型不能是数组，可以返回其他任何类型（可以将数组）
#include <iostream>
using namespace std;
// calculate the sum of two figures
int sum (int,int);   //函数原型不需要写参数名

int main()
{
  //调用函数
  int result =sum(5,6);
  cout<<result<<endl;
  cout<<"result ="<< sum(5,6)<<endl;
  return 0;
}

int sum(int num1,int num2)  //int: return type sum:function name  int num1,int num2:list of parameter
{
 //1.calculate the sum of two figures  2.return the result
 int result = num1 +num2;
 return result;
}



//use function to calculate the volume of cuboid/cylinder
#include <iostream>
#include <cmath>
using namespace std;
//define two function to calculate
//invoking two function in main function
void cuboid();
void cylinder();
int main()
{
    int choice =-1;
    while(choice)
    {
    cout<<"1.cuboid"<<endl;
    cout<<"2.cylinder"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1: cuboid();
    break;
    case 2: cylinder();
    break;
    default:
        cout<<"wrong!";
    break;
    }
    cout<<"thank for using this software!"<<endl;

}
    return 0;
}
void cuboid()
{
 double length,width,height;
 cout<<"Please enter the length,width,height of cuboid"<<endl;
 cin>>length>>width>>height;
 double v=length*height*width;
 cout<<"the volume of cuboid is "<<v<<endl;
}

void cylinder()
{
 double radius,height;
 cout<<"Please enter the radius,height of cylinder"<<endl;
 cin >>radius>>height;
 double v=pow(radius,2)*3.14*height;
 cout<< cout<<"the volume of cylinder is "<<v;
}

