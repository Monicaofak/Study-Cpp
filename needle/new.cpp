//指针真正作用：在运行阶段分配未命名的内存
//如：int * prt_int                    =          new int;
//    在栈区做了一个变量p，其类型是整型指针变量   在堆区分配了一块int型空间
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



*********************************************************************************************************************************

//程序的内存分配
//stack(栈区，堆栈)
//有编译器自动分配释放，一般存放函数的参数值、局部变量值等
//操作方式类似数据结构中的栈——先进后出
//heap（堆区）不是堆栈
//一般由程序员分配释放，若程序不释放，程序结束后可能由操作系统回收，操作系统不回收的话
//容易导致内存泄漏，程序崩溃
//与数据结果中的堆是两回事，分配方式类似链表
//全局区（静态区—static）
//全局变量和静态变量是存储在一起的
//程序结束后由系统释放
//文字常量区
//常量字符串就放在这里，程序结束后由系统释放
//程序代码区存放函数体的二进制编码
//栈区访问速度很快，只是表面操作（一般为等号左边）
//堆取较慢（实际实现）

#include <iostream>
using namespace std;
int num1 = 0;  //全局初始化
int * ptr1;    //全局未初始化区
int main()
 {   //stack
     int num2;  
     //stack 
     char str[] = "laojiujun";  
     //stack
     char * ptr2;
     //'laojiujun'and \0 in 常量区，ptr3 in stack
     char * ptr3 = "laojiujun";
     //全局（静态变量）初始化
     static int num3 = 1024;
     //分配的内存在堆区
     ptr1 = new int[10];
     ptr2 = new char[20];
     //注意：ptr1和ptr2本身是在栈区中的
     return 0;
 }





