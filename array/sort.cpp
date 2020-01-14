1.Bubble sort
//有bug
//循环输入5个整型数字，进行降序排列后输出结果
#include <iostream>
using namespace std;
int main()
{
    //方案一：使用冒泡排序
    //1.第一轮比较的次数为数组总长度减一  2 .下一轮比上一轮比较次数少一次
    int nums[] = {15,25,90,23,9};
    int j;
    int m;    //交换的中间变量
    //外层循环控制比较轮数
    for (int i =0;i< 5-1; i++)
    {   //内层循环控制每轮的比较和交换
        for(int j = 0;j < 5-i-1; j++)
        {
        if(nums[j] < nums[j + 1] )
        {
        //交换
        m = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = m;
        }
        }
    }
       cout<<"after bubble sort:";
       for(i=0;i<6;i++)
       {
       cout<<numa[i]<<" ";
       }
     return 0;
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
