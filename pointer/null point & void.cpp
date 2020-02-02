
//空指针 不指向任何对象，在试图使用一个指针之前可以首先检查是否为空
//nullptr
//int *ptr1=nullptr;  等价于int_ptr=0;
//int *ptr2=0;
//nullptr 默认值是0，NULL预处理器变量，默认值也是0
//尽量定义了对象之后，再定义指向它的指针
#include <iostream>
#include <cstdlib>   //NULL的头文件
using namespace std;
int main()
 {
 //不给指针值得时候回有一个默认值，所以应该给一个初值
 double *ptr_double=nullptr;  //等价于int *ptr_double=0; 等价于int *ptr_double=NULL;
 cout<<ptr_double<<endl;
 return 0;
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

//指针同样是一个变量，只不过该变量中存储的是另一个对象的内存地址
//如果一个变量存储另一个对象的地址，则称该变量指向这个对象
//指针变量可以赋值，指针的指向在程序执行中可以改变
//指针p在执行中某时刻指向变量x，在另一时刻也可指向变量y
//指针命名规则和变量一样
//指针不能与现有变量同名
//指针可以是任何基本数据类型，数组和其他所有高级数据结构的地址
//若指针已声明了指向某种数据类型的地址，则它不能用于存储其他类型数据的地址
//应为指针指定一个地址后，才能在语句中使用指针
