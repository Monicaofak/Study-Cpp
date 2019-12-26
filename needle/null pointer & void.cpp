//null pointer 不指向任何对象，试图用一个指针前可以检查是否为空
//null预处理器变量，默认值为0，nullptr默认值也为0
//用指针时最危险的就是不给他值
#include <iostream>
#include <cstdlib>   //NULL的头文件
using namespace std;
int main()
{
    double * ptr_double = nullptr;
    cout << ptr_double<<endl; //不给值，野指针，危险，所以一般给nullptr作为默认值
    int *ptr3 = NULL; //建议：初始化所有的指针，在可能的情况下尽量等定义了对象之后在定义指向他的指针
}


******************************************************************************************************************************************
//void*指针 特殊的指针类型，可存放任对象的地址
//void*存放的是一个内存地址，指向的内容是什么类型不确定(不是一个对象型指针)
//void*一般用来和别的指针比较、作为函数输入和输出、赋值给另一个void*指针
#include <iostream>
#include <cstdlib>   //NULL的头文件
using namespace std;
int main()
{
 double num =3.14;
 double * ptr_num1 = &num;
 void *   ptr_num2 = &num;
 cout<< boolalpha; //以true or false打印
 cout<< (ptr_num1 == ptr_num2)<<endl;
}
