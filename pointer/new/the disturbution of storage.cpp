
//补充：程序的内存分配
//栈区（stack）：由编译器自动分配释放，一般存放函数的参数值，局部变量值等
//操作方式类似数据结构中的栈，现进后出
//堆区（heap）
//一般由程序员分配释放，若程序不释放，程序结束时可能由操作系统回收
//注意：与数据结构中的堆是两回事，分配方式类似链表
//全局区（静态区 static）
//全局变量和静态变量是存储在一起的
//程序结束后由系统释放
//文字常量区：常量字符串就放在这里，程序结束后由系统释放
//程序代码区：存放函数体的二进制代码
#include <iostream>
using namespace std;
 int num1=0;    //全局初始化区
 int* ptr1;     //全局未初始化区
 int main()
 {   
     //栈区
     int num2;
     //栈区
     char str[]="dudu";
     //栈区
     char * ptr2;
     //dududu以及\0在常量区，ptr3在堆区
     char * ptr3="dududu";
     //全局（静态）初始化区
     static int num3=1024;
     //分配的内存在堆区
     ptr1 = new int[10];
     ptr2 = new char[20];
     //ptr1和ptr2本身是在栈区中的
     
     return 0;
 }
 //栈区访问速度很快表面上的工作，堆区是真正做工作的区域 
