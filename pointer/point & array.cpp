#include <iostream>
using namespace std;
int main()
{
   //array
   //存储在一块连续的内存空间中
   //数组名就是这块连续内存空间的首地址
   double score[] {11,22,33,44,55};  //数组类型 double[]
   double * ptr_score = score;
   cout<<sizeof(score)<<'\t'<<sizeof(ptr_score) <<endl;  //数组：一个整数占8字节，5个整数 
    //指针就是用4个字节表示的（指针一般通过16进制的整型存放）  虽然是double型指针，但也是4字节
   cout <<ptr_score[3]<<endl;
}

//int num[50];  num是数组名，也可理解为数组的首地址
//num 的值与&num[0]的值相同
//数组第 i+1个元素可表示为
  //地址：&num[i+1]或num + i + 1
  //值：num[i+1] 或*(num + i + 1)
  //为指向数组的指针赋值：
  //int * ptr_num = num;或int ptr*num = &num[0];
  //指针变量可以指向数组元素
  //int * ptr_num = &num[4];或int * ptr_num = num + 4;



*********************************************************************************************************************************
#include <iostream>
using namespace std;
int num1 = 0;  //全局初始化
int * ptr1;    //全局未初始化区
int main()
 {   
    int arrays[] {15,20,40,50};
    int* p_arrays = arrays;
    
    for(int i = 0; i < 5; i++)
    {
    cout<<*(p_arrays+i)<<endl;
    }
 }

//数组逆序
#include <iostream>
using namespace std;
int main()
 {
    int arrays[] {15,23,30,40,50，60};
    int * ptr_start = arrays;   //指向第一个元素
    int * ptr_end = arrays + 5; //指向最后一个元素
    int temp;
    while(ptr_start <= ptr_end)
    {
    temp =*ptr_start;
    *ptr_start = *ptr_end;
    *ptr_end = temp;
    ptr_start++;
    ptr_end--;
    }
    for(int i=0;i<6;i++)
    {
    cout<<arrays[i]<<endl;
    }
 }



******************************************************************************************************************************

//二维数组与指针
#include <iostream>
using namespace std;
int main()
 {
    //使用指针创建二位数组
    //二维数组可以理解为每个元素都为一维数组的一维数组
    int (*p2)[3] = new int[5][3] ;//二维数组的一维做成行，做成一个指针
    p2[3][2] = 998;
    for(int i=0;i<5;i++)
    {
    for(int  j=0;j<3;j++)
    {
    cout<<p2[i][j]<<',';
    cout<<*(*(p2+i)+j)<<',';
    }
    cout<<endl;
    }

 }



*********************************************************************************************************************************
conclusion:
//指针是一个变量，存储另一个变量（对象）的内存地址
//int *p=....   地址通过&取地址或new的方式，不能直接赋常量
//int num = 4;
//int* p_num = &num; 通过&取地址给他，此处*是指针类型
//*p_num =112；取值，num的值就变为了112

//int num1 =89;
//引用 int &num = num1; 
//直接引用数 const int& num = 89；
//指针支持运算（++、--）实际是变量存储地址的移动
//double * p1-- p2++ 每次移动8个字节，移动的数量与指针类型有关
//sizeof
//int num[10];
//int *p_num = num;
//sizeof(num)    sizeof(p_num)
//    40              4
//二维数组 int (*p)[4] = new int[4][4];
//            sizeof(p) 
//                4
//二维数组仍然是一个指针
