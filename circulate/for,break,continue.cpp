#include <iostream>
using namespace std;
int main()
{
                //for(表达式1；表达式2；表达式3)1 循环变量初值
                //2 循环条件相当于while括号里的 3 更新循环变量的值
  const int N =20;
  for(int  i = 0; i < N;i++)
  {
  cout<<"再别康桥"<<endl;//int i= 0,只执行一次，当再别康桥打印后，执行 i++,判断为真打印，否则跳出
  }
}


//循环输入6个月工资，计算半年内平均工资
#include <iostream>
using namespace std;
int main()
{
     double salary = 0;
     double sumsalary = 0;
     double avgsalary = 0;
     const int YEAR = 6;
     int i;
     for(i=0;i < YEAR;i++)
     {
     cout<<"please enter "<< i+1 <<'\t'<<"mounth's salary:"<<endl;
     cin>> salary;
     sumsalary =sumsalary + salary;
     }

     cout<<"the avgsalary is"<<'\t'<<sumsalary/YEAR<<endl;
}


//用循环打印1997年7月的月历  1997.7.1（星期二）
#include <iostream>
using namespace std;
int main()     //周几打印几个\t
{
  int day = 31;
  int weekday = 2;//七月第一天是周二
  cout<<"一\t二\t三\t四\t五\t六\t日"<<endl;
  //打印\t 周几-1
  for(int i = 0;i < weekday-1;i++)
  {
  cout<<'\t';
  }
  for(int i = 0; i <31; i++)
  {
  cout << i+1;
    //到底是\n还是\t需要根据i的值判断
    if((i + weekday)%7 ==0)
    {//星期日
    cout << '\n';
  }
  else
  {
  cout<<'\t';
}
  }
}

for循环 要定义循环变量，缺少条件或循环条件不更新时造成死循环
