//打印图案，使用双循环
//例如：打印星号矩形，有两个动作:换行，归零 回车时计算机就同时完成了换行和归零
//*****
//*****
//*****
//所以需要控制行数，还要控制每行的星星数（列数）
//结论：外层循环控制行（行数、换行），内层循环控制列（列数、列的图形）
#include <iostream>
using namespace std;
int main()
 {
 for(int i=0;i<5;i++)  //行数
 {
 for(int j=0;j<5;j++)  //置零
 {
 cout<<'*';   //图形
 }
 cout<<endl;   //换行
 }
 return 0;
 }


//输出菱形：
//横行先打印空格，再打印星号
//打印三角形可以从打印矩形借鉴
//*           i行数    j星星个数
//**           0         0
//***          1       1
//****         2       2    j<=i
//*****        3       3
//打印三角形，就是讨论行和列的关系
#include <iostream>
using namespace std;
int main()
{
  for(int i=0;i<5;i++)
  {
  for(int j=0;j<=i;j++)
  {
  cout<<"*";
  }
  cout<<endl;
  }
  return 0;
}

//打印
//*
//***
//*****
//*******
//行数    星星个数
//  0       0
//  1       2   j<=2*1
//  2       4
//  3       6
//  4       8
#include <iostream>
using namespace std;
int main()
{
  for(int i=0;i<5;i++)
  {
  for(int j=0;j<=2*i;j++)
  {
  cout<<"*";
  }
  cout<<endl;
  }
  return 0;
}


//打印菱形
//###*
//##***
//#*****
//*******
//#*****
//##***
//###*
//行数    星星个数           行数     #个数             行数   *个数    #个数
//  0       0                   0       2                 0       4        0   j<=4-2*i
//  1       2   j<=2*i         1       1     j<=2-i      1       2        1
//  2       4                   2       0                 2       0        2
//  3       6                   3
//  4       8
#include <iostream>
using namespace std;
int main()
{
  for(int i=0;i<4;i++)           //上半部分
  {
      for(int j=0;j<=2-i;j++)
  {
  cout<<" ";
  }
  for(int j=0;j<=2*i;j++)
  {
  cout<<"*";
  }
  cout<<endl;
  }

   for(int i=0;i<3;i++)           //上半部分
  {
      for(int j=0;j<=i;j++)
  {
  cout<<" ";
  }
  for(int j=0;j<=4-2*i;j++)
  {
  cout<<"*";
  }
  cout<<endl;
  }
}



//打印字母
#include <iostream>
using namespace std;
int main()
{
  for(int i=0;i<4;i++)           //上半部分
  {
      for(int j=0;j<=2-i;j++)
  {
  cout<<" ";
  }
  for(int j=0;j<=2*i;j++)
  {
  cout<<(char)('A'+i);
  }
  cout<<endl;
  }

   for(int i=0;i<3;i++)           //上半部分
  {
      for(int j=0;j<=i;j++)
  {
  cout<<" ";
  }
  for(int j=0;j<=4-2*i;j++)
  {
  cout<<(char)('E'+i);
  }
  cout<<endl;
  }
}


//打印空心菱形
//在j是极值的情况下打印星号，否则打印空格
#include <iostream>
using namespace std;
int main()
{
  for(int i=0;i<4;i++)           //上半部分
  {
      for(int j=0;j<=2-i;j++)
  {
  cout<<" ";
  }
  for(int j=0;j<=2*i;j++)
  {
  if(j==0||j==2*i)
  cout<<'*';
  else
    cout<<' ';
  }
  cout<<endl;
  }

   for(int i=0;i<3;i++)           //上半部分
  {
      for(int j=0;j<=i;j++)
  {
  cout<<" ";
  }
  for(int j=0;j<=4-2*i;j++)
  {
  if(j==0||j==4-2*i)
  cout<<'*';
  else
    cout<<' ';
  }
  cout<<endl;
  }
}








