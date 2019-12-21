#include <iostream>
using namespace std;
int main()
{
   int i = 1;
   while (i <= 10)      //while可以看成加强版if if执行到大括号后结束，继续向下执行 
   {                    //while 执行完大括号后，返回但while中作判断，条件不符合又向下执行
   cout<<"小人本住在苏州城边，第"<<i<<"遍\n"; //思考中模拟循环的逻辑走一遍
   i++;                                        //通过循环控制变量，控制循环的次数 此处是i
   }                                            //i <= 10是循环操作语句   i=1是控制变量的初值
}                                               //步骤：初值、判断、更新







#include <iostream>
using namespace std;
int main()
{
   int i = 1;
   while (i <= 10)      //while可以看成加强版if if执行到大括号后结束，继续向下执行 
   {                    //while 执行完大括号后，返回但while中作判断，条件不符合又向下执行
   cout<<"小人本住在苏州城边，第"<<i<<"遍\n"; //思考中模拟循环的逻辑走一遍
   i++;                                        //通过循环控制变量，控制循环的次数 此处是i
   }                                            //i <= 10是循环操作语句   i=1是控制变量的初值
}                                               //步骤：初值、判断、更新
                                                //while特点：先判断，再执行



//use while 实现三次密码输入错误退出系统
//并没有真正满足题意，自行补全
#include <iostream>
#include <cstdlib>      //exit头文件
using namespace std;
int main()
 {
 string password;
 int i =0;
 while (i < 3)
    {
 cout<<"please enter your password:"<< endl;
 cin >>password;
 cout<<"the password you enter is:"<<password<< endl;
 i++;
 //判断用户输入的是否正确
 if (password!="12345678")
  {
    if(i==3)
    {
    cout<<"3次密码输入错误，强制退出系统！"<<endl;
    exit(0);    //此处的数字是错误提示码
    }
  }
 }
 }



#include <iostream>
#include <cstdlib>      //exit头文件
using namespace std;
int main()
 {
     int k = 2;
     while (k=1)   //=是赋值运算符，无线循环（死循环）
        k=k-1;
     cout<<k;
 }






//使用循环实现拳皇对战
#include <iostream>
#include <cstdlib>      //rand头文件
#include <ctime>
using namespace std;
int main()
 {
     //八神庵的HP
 int hp1 = 100;
 int hp2 = 100;             //草寂静的HP
 int attack1 = 0;          //八神的攻击
 int attack2 = 0;          //草寂静的攻击
 int randNum;              //用来存放玩家攻击先后的随机变量数
 srand(time(NULL));
 //模拟玩家出招:可以采用随机数是奇数还是偶数的方式来决定谁先进行攻击
 //奇数 八神先 偶数草寂静先
 while(hp1 >= 0 && hp2 >=0)
 {

 randNum = rand();
 if (randNum % 2 ==1)
 {
   attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));  //随机数除以随机数的最大值加一
   attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
   hp2 -= attack1;   //互相掉血
   hp1 -= attack2;                                                   //一定是小数，*10，0-10之间，+5，为0-15之间
 }else
 {
   attack2 =(int)(5 + 10 * rand() / (RAND_MAX + 1.0));
   attack1 =(int)(5 + 10 * rand() / (RAND_MAX + 1.0));
   hp1 -= attack2;
   hp2 -= attack1;
 }
 }
 //打印对战的最终结果
 cout<<"八神庵HP"<<hp1<<endl;
 cout<<"草寂静HP"<<hp2<<endl;
  }



****
do while
****

#include <iostream>
using namespace std;
int main()
{
    //do whlie 与while 条件的位置不一样
    //先执行一次循环，符合条件，循环继续执行，否则跳出循环
    int a = 1,b = 10;
    do {
        b -= a;
        a ++;
    }while(b--<0);    //while(b < 0) b--;  b=9,不符合，跳出循环，再--
    cout<<"b="<<b<<endl;
}



#include <iostream>
using namespace std;
int main()
{
    int a,b = 1,s = 0;
    cin >> a;            //A 任意正奇数 B 任意负偶数
    do {               //C任意正偶数  D任意负奇数
        s=s + b;       //为使程序不陷入死循环，从键盘应输入D
        b=b - 2;
    }while(a != b);  //a != b 执行，即a==b,b=b-2,-1,-3,-5,-7,-9
}

whlie与do while 
执行顺序不同 while先判断后执行，不满足条件一次都不执行， do while 先执行后判断，不管符不符合条件都会执行一次


