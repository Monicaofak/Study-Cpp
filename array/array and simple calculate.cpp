#include <iostream>
using namespace std;
int main()
{
  //数组时一个变量，由相同的数据类型组成 变量是内存中的一块空间
  //数组是内存中一块连续的空间 基本组成：标识符、数组元素、从0开始、元素类型
  //数组只有一个名称，即标识符
  //元素下标标明了元素在数组中的位置，从0开始
  //数组中的每一个元素都可以通过下标来访问
  //数组长度固定不变，避免数组越界
  //数组是一种数据类型，实际上就是 数据类型+[] 如 int[]
  //**数组中的所有元素，必须是相同数据类型   //C++中数组可以是变量

  //动态的从键盘录入信息并赋值
  const int N = 5;
  int nums[N];
  for(int i = 0;i < N;i++ )
  {
  cout<<"please enter the"<<i+1<<"个数组元素：";
  cin>>nums[i]; //录入nums 里面的第i个元素
  }
  for(int i = 0;i < N;i++ )
  {
  cout<<nums[i]<<endl;

  }
}


#include <iostream>
using namespace std;
int main()
{
  const int N = 5;
  int nums[N];
  cout<<"数组的大小"<<sizeof (nums) / sizeof(int) <<endl;  //输出数组的大小是5： 20/4=5
  for(int i = 0;i < sizeof(nums) / sizeof(int);i++ )    //即使没有给数组初值，已经有5个整形元素
  {                                                      //且初值为0
  cout<<"please enter the"<<i+1<<"个数组元素：";
  cin>>nums[i]; //录入nums 里面的第i个元素
  }
  for(int i = 0;i < N;i++ )
  {
  cout<<nums[i]<<endl;

  }
}


使用数组步骤：
1.定义数组大小，可用常量或变量
2.初始化（初始化列表） 也可让用户输入数据
3.使用




//a array:8,4,2,1,23,344,12
//circulate export the value of the array
//calculate sum and average
#include <iostream>
using namespace std;
int main()
{
  int nums[] {8,4,2,1,23,344,12};
  int numslength =  sizeof(nums) /sizeof (int);    //array length
  int sum = 0;
  for (int i = 0; i < numslength; i++)
  {
  cout<<nums[i]<<'\t';
  }
  cout<<endl;
  for(int i = 0; i< numslength;i++)
  {
  sum = sum + nums[i];
  }
  cout<<"sum of array:"<<sum<<endl;
  cout<<"average of array:"<< sum / numslength<<endl;

//1.calculate the maximum and minimum of array


  int max = nums[0];//1.假设第一个元素是最大值
  int min = nums[0];
  int maxIndex = 0;  //最大值的下标
  int minIndex = 0;
  for (int i = 1; i < numslength;i++)
  {
    if (nums[i] > max)
    {
    max = nums[i];
    maxIndex = i;
    }
    if (nums[i] < min)
    {
    min = nums[i];
    minIndex = i;
    }

  }
  cout<<"the maximum is:"<< max <<'/'<< nums[maxIndex]<<endl;
  cout<<"the index of maximum is:"<< maxIndex<<endl;
  cout<<"the minimum is:"<< min <<'/'<< nums[minIndex]<<endl;
  cout<<"the index of minimum is:"<< minIndex<<endl;


//2.create a int array,give value,calculate the numbers of evens and odds.
  int oddscount = 0;
  int evencount = 0;
 for (int i=0; i<numslength; i++)
 {
  if(nums[i] % 2 == 0)
  {
  evencount++;        //if与for循环后面的大括号都可以省略，但省略后只能加一句话
  }else
  {
  oddscount++;
  }
 }
 cout<<"the numbers of odds :"<<oddscount<<endl;
 cout<<"the numbers of evens:"<<evencount<<endl;

//3.calculate the index of enter numbers,the not fund -1
  int Index;
  int input;
  cout<< "please enter a number:" <<endl;
  cin>> input;
  for (int i=0; i< numslength; i++)
  {
  if (input == nums[i])
  {
  Index = i;
  break;                    //跳出循环
  }else
    {
    Index = -1;
    }
  }
  cout<<"the index of the input number is:"<<Index;
}
*****************************************************************************************************************************************
//Bubble sort
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
