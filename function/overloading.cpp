//overloading
//指可以有多个同名的函数
//函数名相同，参数列表不同（特征标不同），但是同一个引用和非引用之间编译器会分不清
//如eating(string) 和eating(string&)的特征标（参数列表）是相同的，调用时都可以写作：eating(food);
//调用匹配函数时，不区分const和非const变量
//重载：编译器在编译时，根据参数列表对函数进行重命名
//如void swap(int a,int b)
//swap_int_int  编译器转译时（重载决议）
//void swap(int& a,int& b)     分不清
//swap_int_int  编译器转译时（重载决议）

//void swap (float a,float b)
//swap_float_float 编译器转译时（重载决议）
//使用函数重载实现不同数据类型数组的排序

#include <iostream>
using namespace std;
void Sort(int[],int len);
void Sort(float[],int len);
void Sort(double[],int len);
void Show(int[],int len);
void Show(float[],int len);
void Show(double[],int len);


int main()
{
    int iNums[] = {56,54,12,89,43};
    float fNums[] = {78.0f,5.7f,42.8f,99.1f};
    double dNums[] = {78.9,23.6,77.8,98.5,33.3};

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

}

void Sort(int nums[],int len)
{
int temp;
cout<<"sizeof(nums)="<<sizeof(nums)<<endl;
for (int i=0;i<len-1;i++ )
{
for(int j=0;j <len-i-1;j++)
{
    if(nums[j] > nums[j+1])
    {
    temp = nums[j];
    nums[j] = nums[j+1];
    nums[j+1] = temp;
    }
}
}
}

void Sort(float nums[],int len)
{
int temp;
for (int i=0;i<len-1;i++ )
{
for(int j=0;j <len-i-1;j++)
{
    if(nums[j] > nums[j+1])
    {
    temp = nums[j];
    nums[j] = nums[j+1];
    nums[j+1] = temp;
    }
}
}
}

void Sort(double nums[],int len)
{
int temp;
for (int i=0;i<len-1;i++ )
{
for(int j=0;j <len-i-1;j++)
{
    if(nums[j] > nums[j+1])
    {
    temp = nums[j];
    nums[j] = nums[j+1];
    nums[j+1] = temp;
    }
}
}
}

void Show(int nums[],int len)
{
for(int i = 0;i<len;i++)
{
 cout<<nums[i]<<",";
}
 cout<<endl;
}

void Show(float nums[],int len)
{
for(int i = 0;i<len;i++)
{
 cout<<nums[i]<<",";
}
 cout<<endl;
}

void Show(double nums[],int len)
{
for(int i = 0;i<len;i++)
{
 cout<<nums[i]<<",";
}
 cout<<endl;
}
