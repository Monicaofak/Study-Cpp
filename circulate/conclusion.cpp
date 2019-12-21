//多次重复执行一个或多个任务时考虑使用循环来解决问题
//区别：除了语法不同，判断和执行的顺序也不同
//循环次数确定，采用for循环 循环次数不确定，通常用while和do while循环
//while循环 
int i = 0;
while (判断)              do                                                                  for(;;)
{                           {            //都可以看作强化版本的if语句，如果条件为真就执行循环体    {    //将循环三要素写在一起，在循环次数固定时使用

}                           }while(判断);                                                        }




//打印图形：使用双循环（嵌套循环）   单循环：一条线
#include <iostream>  //需要控制行数、列数(换行，归零)
using namespace std; //外层循环控制行（行数、换行），内层循环控制列（列数、列的图形）
int main()
 {
   for(int i = 0; i<10;i++) //10行
   {
   for(int j=0; j <5; j++)  //5列
   {
   cout<<'$';               //图形，此处不可再换行
   }
   cout<<endl;              //换行
   }

 }
 
 //打印三角形，实际就是讨论i和j的关系
#include <iostream>
using namespace std;
int main()
 {
  for(int i=0;i <5;i++)  
 {
  for(int j=0;j<=i;j++)
  {
  cout<<'*';
  }
  cout<<endl;
 }
 }


//菱形
#include <iostream>
using namespace std;
int main()           //从0 开始数数
{                                       //行数    星星的个数
   for(int i = 0;i <4;i++)
    {
        for(int j =0; j<=2-i;j++)
        {
            cout<<' ';
        }

        for(int j = 0;j <= 2*i; j++)
        {
         cout<<'*';
        }                               //  i    j
    cout<<endl;                       //    0     0
    }                                 //     1     2
                             //     2     4
//下半部分
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0; j <= i;j++)
        {
            cout<<' ';
        }
        for(int j = 0;j <= 4-2*i; j++)
        {
         cout<<'*';
        }
    cout<<endl;
    }
}

//替换字母
/有BUG
#include <iostream>
using namespace std;
int main()           //从0 开始数数
{
   char shap = 'A';                            //行数    星星的个数
   for(int i = 0;i <4;i++)
    {
        for(int j =0; j<=2-i;j++)
        {
            cout<<' ';
        }

        for(int j = 0;j <= 2*i; j++)
        {
         cout<<(char)shap;
         shap++;   //常量不能直接++
        }                               //  i    j
    cout<<endl;                       //    0     0
    }                                 //     1     2
                             //     2     4
//下半部分
char shap2 = 'E';
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0; j <= i;j++)
        {
            cout<<' ';
        }
        for(int j = 0;j <= 4-2*i; j++)
        {
         cout<<(char)shap;
         shap2++;
        }
    cout<<endl;
    }
}




