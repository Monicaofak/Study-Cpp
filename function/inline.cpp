//inline function
//内联函数：C++为提高程序速度所做的一项改进
//与常规函数的区别不在于编写方式,而在于被调用时的运行机制不同
//常规函数通过函数名找到函数内存，并执行，执行完后该内存不再被占用可执行其他操作
//类似于看文章时将生词查字典
//内联函数通过函数名，将函数的代码替换到执行函数的地方（使用函数代码代替函数调用）
//类似于看文章时将生词释义直接做成注解
//如果执行函数代码的时间比处理函数调用机制的时间长，则节省的时间只占整个过程的很小一部分
//如果代码执行时间很短，内联调用就可以节省大部分时间
//常规情况下内联函数执行时间较快，但内存开销较大（10个不同的地方调用一个内联函数，就有10个相同的副本）
//内联函数一般用于函数很简单的情况下
//最重要的使用地方在于类的存取
//内联函数只是对编译器的一个建议，如该函数有1000行时，编译器自动忽略inline
//可在函数声明前加关键字inline
//可在函数定义前加关键字inline

#include <iostream>
using namespace std;
inline int S(int);
int main()
{
  int result = S(5+10);
  cout<<result<<endl;
  return 0;
}
int S(int num)
{
  return num*num;
}



#include <iostream>
#define N 5  //C中 宏定义，以后在使用N的时候都会被自动替换成5
#define S(num) num*num  //宏定义了S(num)函数
//以后在所有使用s(num)的地方，就自动被替换成num*num
using namespace std;
int main()
 {
 int result1 = S(5+10);  //结果出错
 //此处运行的是5+10*5+10，所以宏定义看似强大，但无法作为一个真正的函数
 //C++中的内联就是宏定义的升级
 double result2=S(2.5);
 cout<<result1<<endl;
 cout<<result2<<endl;
 return 0;
 }


