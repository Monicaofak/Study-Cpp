//有bug
//函数模板，实际上就是建立一个通用函数
//函数定义时不指定具体的数据类型（使用虚拟类型替代）
//函数被调用时编译器根据实参反推数据类型-类型的参数化
//模板头与函数声明和调用永远是不可分割的整体
// template<typename 类型参数1，typename 类型参数2，...>
//返回值类型 函数名（形参列表）{
   //函数体中可以使用类型参数
//}
//书写底层框架多使用函数模板
#include <iostream>
using namespace std;
template<typename T> void Sort(T tArray[],int len);  //声明虚拟的数据类型T
template<typename T> void Show(T tArray[],int len);  //T在函数内部有效，所以可以循环使用
int main()
{
   int iNums[] = {56,54,12,89,43};
    float fNums[] = {78.0f,5.7f,42.8f,99.1f};
    double dNums[] = {78.9,23.6,77.8,98.5,33.3};
    string sNums[] ={"关羽","张飞","黄忠"};

    cout<<"排序前：";
    Show(iNums,sizeof(iNums)/sizeof(iNums[0]));
    Sort(iNums,sizeof(iNums)/sizeof(int));   //两种写法相同
    cout<<"排序后";
    Show(iNums,sizeof(iNums)/sizeof(iNums[0]));

    cout<<"排序前：";
    Show(fNums,sizeof(fNums)/sizeof(fNums[0]));
    Sort(fNums,sizeof(fNums)/sizeof(int));   //两种写法相同
    cout<<"排序后";
    Show(fNums,sizeof(fNums)/sizeof(fNums[0]));

    cout<<"排序前：";
    Show(dNums,sizeof(dNums)/sizeof(dNums[0]));
    Sort(dNums,sizeof(dNums)/sizeof(int));   //两种写法相同
    cout<<"排序后";
    Show(dNums,sizeof(dNums)/sizeof(dNums[0]));

    Show(sNums,3);


}

template<typename T>
void Sort(T tArray[],int len)
{
    T temp;  //临时变量也设为T
    for(int i=0;i<len-1;i++)
    {
    for(int j=0;j<len-i-1;j++)
    {
    if(tArray[j] > tArray[j+1])
    {
    temp=tArray[j];
    tArray[j] = tArray[j+1];
    tArray[j+1] =temp;
    }
    }
    }
}

template<typename T>
void Show(T tArray[],int len)
{
  for(int i=0;i<len;i++)
  {
  cout<< tArray[i]<<",";
  }
  cout<<endl;
}
