//指针真正作用：在运行阶段分配未命名的内存
//如：int * prt_int                    =          new int;
//在栈区做了一个变量p，其类型是整型指针变量   在堆区分配了一块int型空间
//p++后，这块内存依然存在，只是没有指针指向他了
//没有指针指向的内存：野指针/内存泄漏
//在运行到new阶段为一个int值分配未命名的内存，把这块内存的值赋给左侧，ptr_int 指向新的内存空间
//delete与new成对出现，释放内存
//不要重复释放内存
//不要释放普通变量的内存
//不要创建两个指向同一内存的指针
//delete ptr_int;  //释放由new分配的内存空间
//在编译阶段分配内存:
//如 int num[3];      int num1;
//编译时（包办婚姻）：指定空间后不能更改，程序结束时才销毁
//运行时：int * nums = new int[5];
//整个程序运行到这段话是才给5个整型空间，然后把空间地址赋给nums，就说nums指向了一个新空间


#include <iostream>
using namespace std;
int main()
 {
 int num[5];
 int * nums = new int[5];
//堆内存里分配了五个整型空间，然后把空间地址赋给nums，所以打印出地址大小
 cout<<sizeof(num)<<'\t'<<sizeof(nums)<<endl;
 }
 
 #include <iostream>
using namespace std;
int main()
 {
     int *ptr_int = new int;
     short * prt_short = new short[500];
     delete ptr_int;
     delete []prt_short;
     //不要使用delete释放不是new分配的内存
 }

//使用new创建动态分配的数组
//int * intArray=new int[10];
//使用delete[]释放内存空间
//delete[]Array;






