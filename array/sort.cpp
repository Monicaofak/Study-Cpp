1.Bubble sort
#include <iostream>
using namespace std;
void BubbleSort1(int arr[],int n);
void BubbleSort2(int arr[],int n);

int main()
 {
 int a[]={12,34,46,58,24};
 int arrsize=sizeof(a)/sizeof(a[0]);
 BubbleSort1(a,arrsize);
 cout<<"排序后";
 for(int i=0;i<arrsize;i++)
 {
 cout<<a[i]<<" ";
 }
 cout<<endl;
 BubbleSort2(a,arrsize);
 cout<<"排序后";
 for(int i=0;i<arrsize;i++)
 {
 cout<<a[i]<<" ";
 }
 return 0;
 }
 
void BubbleSort1(int arr[],int n) 
//未优化的冒泡排序 
 {
 for(int i=0;i<n-1;i++)
 {
 for(int j=0;j<n-i-1;j++)
 {
 if(arr[j]>arr[j+1])
 {
 int tmp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=tmp;
  } 
 }
 }
 }
 
 void BubbleSort2(int arr[],int n)
 {
// 设置标志位用来查看是否发生交换，如果没有发生交换说明排序已经完成，不需要再进行排序
// 这种情况发生的概率不多，这种改进需要额外保存一个变量，效果可能还不如第一种效果
 bool flag=true;
 for(int i=0;i<n-1 && flag;i++)
 {
 flag=false;
 for(int j=0;j<n-i-1;j++)
 {
 if(arr[j]>arr[j+1])
 {
 int tmp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=tmp;
 flag=true;
  } 
 }
 }
 }
    //选择排序
#include <iostream>
using namespace std;
int main()
{
    //方案二：使用选择排序（不交换，直接赋值）
    //1.假设第一个值是最小值，min:45 min index:0。用第二个元素32与其比，32小，
    //所以min：32 min index：1 比到最后21最小，所以min:21 min index:4,将第一个元素和真正最小的
    //元素交换。i=0
    //2.第二轮：min: 32 min index:1,依次与后面元素比较，不变 i=1
    //3.第三轮 min:56 min index:2  46比56小，min:45 min index:4 45与56交换  i=2
    //4.第四轮：min：90 index min=3 比56小，min：56 index min：4 交换 i=3
    int nums[] = {45,32,56,90,21};
    int numslength = sizeof(nums) / sizeof(int);  //通过计算得到整形数组的实际长度
    //擂台变量                                    //（不能用于字符串数组）
    int min = nums[0];     //假设最小值是数组的第一个元素
    int minindex = 0;
    int m = 0;
    for (int i = 0;i < numslength-1; i++)
    {
    min = nums[i];  //假设第i个元素是最小值
    minindex = i;
    for(int j = i+1;j < numslength; j++)
    {
    //打擂台
    if(nums[j] < min)
    {
    min =nums[j];
    minindex = j;
    }
    }
    //交换最小值与i
    if(minindex > i)
    {
    m = nums[minindex];
    nums[minindex] = nums[i];
    nums[i] =m;
    }
    }
    cout<<"排序后："<<endl;
    for(int i = 0;i < numslength;i++)
    cout<<nums[i]<<endl;
    //逆序
    //第一个元素与最后一个交换，第二个与倒数第二个交换
    for (int i=0; i < numslength / 2; i++)  //交换一半即可
    {
    m = nums[i];
    nums[i] = nums[numslength - i- 1];  //i=0,与总长度减一个交换
    nums[numslength - i -1] = m;
    }
    cout<<"逆序后："<<endl;
    for(int i = 0;i < numslength;i++)
    cout<<nums[i]<<endl;
}
