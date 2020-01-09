//数据类型
//数值                            非数值   string
//整型                            浮点型
//int  short long和 longlong        float  double和long double
//int 占32位 = 4字节  32 个1为二进制最大，换算为十进制最大就为2147483647
//short 用来存储比较小的数字 慎重使用
#include <iostream>
using namespace std;
int main()
 {
 size_t   abc=19;       //光标移到size_t上出现public unsigned int size_t（起别名）
 typedef char wode_char;   //自己定义的，起别名
 wode_char name = 'a';
 cout<<INT_MAX<<endl;    //光标放置其上时出现#define INT_MAX 2147483647 宏定义常量
 cout<<INT_MIN<<endl;   
 cout<<abc;
 cout<< name;
 return 0;
 }
//选用浮点数尽量用double
//char 字符型实质是整型存储的
//bool类型 实质是整型存储的
//还有各种数据类型的无符号版
//其他：size_t,枚举类型，自定义类型，指针类型，空类型
//关键字全为大写时为常量
