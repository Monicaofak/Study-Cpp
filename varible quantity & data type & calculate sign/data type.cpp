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

//float 6-7为有效数字  小数点前后加起来6=7位
# include <iostream>
using namespace std;
int main()
 {
 float num =12345.12345678f;  
 cout<<num<<endl;
 return 0;
 }
 

//已知圆柱的半径和高，求圆柱的体积
#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
 const double PI = 3.14;
 float radius = 4.5;
 float height = 90.0;
 double volume = PI*pow(radius,2)*height;
 cout<<volume;
 return 0;
 }
//定义float可以在结尾加一个f
//cmath函数库定义了数学函数

#include <iostream>
#include <iomanip>  //控制符的头文件
using namespace std;
int main()
 {
 cout<<fixed;  //控制显示的精度 1.以小数显示2.控制位数
 cout<<setprecision(2);
 double doubleNum =10.0/3.0;
 cout<<doubleNum<<endl;
 cout<<doubleNum*1000000<<endl;  //数字太大，显示了科学技术法
 cout<<setw(8)<<"|"<<3.14<<"|"<<endl; //setw 设定宽度，只管他后面的符号
 return 0;
 }

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 cout<<sizeof(double)<<endl;
 cout<<sizeof(long double)<<endl;   //占的字节越长，精度越高
 cout<<sizeof(3.14)<<endl;  //C++中，小数默认是double类型
 cout<<sizeof(3.14f)<<endl;
 return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //演示单精度浮点型和双精度浮点型精度问题
 float numFloat =10/3.0;
 double numDouble =10/3.0;
 cout<<fixed; //让浮点型以固定的方式显示
 cout<<setprecision(2);//控制显示小数位数
 cout<<numFloat * 10000<<endl;   //float显示错误（精度不够）
 cout<<numDouble * 10000<<endl;
 return 0;
}


//char
//位数：8位 bit （使用8位二进制数字表示一个char型）
//进制：几进制就没有几 如10进制没有10
//2进制没有2   全为0最小 全为1最大
//那么char类型11111111 最大 00000000最小，但计算机里第一位是符号位
//转换后-128-127
//unsigned char 无符号字符型 第一位不是符号位 即11111111全是1，最大值为255
//子网掩码：四个一个字节
#include <iostream>
using namespace std;
int main()
 {
 cout<<'A'+' '<<endl;   //97小a的IISCA码
 cout<<(char)('A'+' ')<<endl; //强制类型转换
 return 0;
 }


