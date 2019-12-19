#include <iostream>

using namespace std;

int main()
{
    int  num = 1024;
    //演示复合运算符
    num +=90;   //means：num = num + 90 变量就是一块内存，通过数据类型和变量来操控计算机内存
    num *=90;
    num /=90;
    num -=90;
    num %=90;
    cout<< num << endl;
    return 0;
}
