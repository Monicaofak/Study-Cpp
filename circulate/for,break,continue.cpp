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

**************************************************************************************************************************
//循环输入玩家年龄，一旦输入值为负，停止输入，提示输入错误
#include <iostream>
using namespace std;
int main()
{
    //在while、do while、for循环中遇到break都直接跳出循环
    int age;
    for( ; ;)   //标准的死循环或while(true)
    {cout <<"please enter the age of your role:"<<endl;
    cin >> age;
    if(age < 0)
    break;
}
cout<<"wrong!"<<endl;
}


//幸运53猜商品价格游戏根据猜的次数给予不同奖励 1：iPhonexs 2-3：小米移动电源 <5:VR眼镜
//有Bug
#include <iostream>
using namespace std;
int main()
{
    const double PRICE =5000;//要猜的
    double guess;
    int times=0;
    //游戏实际就是一个死循环
    for(;;){
            //每猜一次，猜测次数加一
        times++;
        cout<<"please enter the price of goods"<<endl;
        cin>>guess;
        if(guess > PRICE)
        {
        cout<<"too big!"<<endl;
        }
        else if (guess < PRICE)
        {
        cout<<"too small!"<<endl;
        }
        else
        {
        cout<<"congratulations!"<<endl;
        }
        break;
        }

    if (times == 1)
    {
    cout<<"You win an iphoneXS"<<endl;
    }
    else if(times>=2 && times<=3)
    {
    cout<<"You win a 小米充电宝"<<endl;
    }
    else if(times>=4 && times<=5)
    {
    cout<<"You win  VR glasses"<<endl;
    }
    else
    {
    cout<<"You are foolish!"<<endl;
    }
    }



//continue 跳过本次循环，继续下次循环（跳出此次，进入循环变量）
//循环输入5个玩家的消费，统计消费额低于500的玩家数量
#include <iostream>
using namespace std;
int main()
{
    int pcount = 0;   //count计数器
    double con;
    for(int i = 0; i<5 ; i++)
    {
    cout<<"please enter 当前 player's consumption:"<<endl;
    cin>> con;
    if(con >= 500)
      continue;  //跳过500以上的情况,直接进入i++，再进入循环
      pcount++;
    }
    cout<<"the counts of player that consumption below 500 :"<<pcount<<endl;
}


$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

break 可用于switch和循环结构中，continue 只能用于循环结构中
break 语句终止某个循环，程序跳转到循环块外的下一个循环
continue跳出本次循环，进入下一循环


//calculate the sum of evens between 1-100
#include <iostream>
using namespace std;
int main()
{
  int sum = 0;
  for(int i=1 ; i <= 100 ; i++)
  {
  //跳过所有奇数情况
  if(i % 2 == 0)
    continue;
  sum = sum + i;
  }
  cout<<"the evens between 1-100 sum="<<'\t'<<sum;
}





