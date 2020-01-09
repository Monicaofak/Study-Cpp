//计算机使用内存来记忆或存储计算时使用的数据
//内存：计算机执行程序时，组成程序的指令放在内存中的某个地方、
//内存也称为主存(main memory)或随机访问存储器(Random Access Memory,RAM)
//bin 配置文件
//变量时计算机中一块特定的内存空间，由一个或多个连续的字节组成
//8bit 比特= 1byte字节
//10M 带宽：10 bit per second
//存存款5000，年利率0.55，一年后多少存款
#include <iostream>
using namespace std;
int main()
 {
 int n=5000;
 n=n*1.055;  //更新内存中的数据
 cout<<n;
 return 0;
 }

//通过变量名可以简单快速地在内存中找到想要的数据
//避免重名：另外的技术 namespace
//命名规则
//首字母：下划线、字母   其他字母：下划线、字母、数字，不能是关键字（保留字）
//不要使用拼音，单个英文单词，提倡使用有正式含义的英文单词


//声明变量
// int a;    声明变量
//int a=3;   声明并初始化
//int a;  a=3; 声明后初始化
//变量名不要重复，一条语句可以声明多个相同类型的变量
# include <iostream>
using namespace std;
int main()
 {
    int salary=2500;
    cout<<"Xiaoming's salary is:"<<salary; //endl;输出一个换行并强制前面的缓存显示在屏幕上
    return 0;
 }

