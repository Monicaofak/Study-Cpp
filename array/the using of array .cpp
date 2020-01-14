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

   
   
