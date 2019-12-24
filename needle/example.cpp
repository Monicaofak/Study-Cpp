//指针是一个值为内存地址的变量（或数据对象）
//内存地址的分配是随机的
//通过指针是间接获数据，通过变量名是直接获取数据，后者效率更高
//用法：如
//int num = 10;     声明整型变量的num 值为10
//int* ptr_num;    声明整形的指针 ptr_num
//ptr_num = &num;   num的地址赋予指针pre_num
//inr* p的写法偏向于地址，即p就是一个地址变量，表示一个十六进制的地址
//int *p的写法偏向于值， *p是一个整形的变量，能够表示一个整型值
//声明中的*与使用中的*含义完全不同

//取地址运算符
//int num = 1024;
//int* ptr_num;
//ptr_num = &num; 取num变量的地址赋给prt_num 即prt_num指向num
//好处：直接找到该对象，进行修改

//间接运算符
//int num = 1111;
//*ptr_num = 1111; //*此处不再是指针类型，而表示取值，根据地址找到真实的空间值
//指针可以理解为地址
#include <iostream>
using namespace std;
int main()
{
    double num =1024.5;
    double* ptr_num = &num;  //给指针赋值只能使用&符号
    cout<<"num's value is:"<<num<<endl;
    cout<<"num's address is"<<&num<<endl;
    cout<<"ptr_num's value is:"<<prt_num<<endl;
    cout<<"ptr_num ahead to internal storage's value is: "<<*ptr_num<<endl;
    cout<<"ptr_num's adress is:"<<&prt_num<<endl;
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    char ch = 'a';
    char * prt_ch = &ch;
    //思考 打印地址还是 ch的值？
    cout<< prt_ch <<'\t'<<*prt_ch<< endl;
    //原因：char默认字符串型 打印地址也以字符串打印
    //方法:强转
    cout <<(void *)prt_ch<<'\t'<<*prt_ch<<endl; //void* 任意类型指针
}
