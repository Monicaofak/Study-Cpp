//引用 为某个对象起另外一个名字
#include <iostream>
using namespace std;
int main()
 {
 int int_value=1024;
 int& refValue=int_value;    //后面操作二者其实是操作同一个
 //引用必须初始化，不能直接引用常量（自变量）double& d=12.3 错
 const double& d=12.3;  //对（指向常量的引用）
 //使用引用的时候，不需要测试其有效性，所以使用引用比使用指针的效率要高一些
 //当数据所占内存比较大时，建议使用引用参数
 //将引用变量用作参数时，函数将使用原始函数，而非副本
 cout<<refValue<<endl;
 cout<<d<<endl;
 }
