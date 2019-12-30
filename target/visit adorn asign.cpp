//public 修饰的成员在如何地方都可以访问
//private 修饰的成员只能在类中或类的友元中可以访问
//数据隐藏--封装
//protected 修饰的成员可以在类中函数、子类函数及友元函数中访问
//写法
//class 类名{
//  修饰符：
//      成员列表；
// };
//::作用域解析运算符，表示从属关系


main.cpp
#include <iostream>
#include "ji1.hpp" 
#include "ji2.h"
#include "ji3";
using namespace std;
int main()
{
   ji3 landOwner3;
   landOwner3.name ="巴依老爷";
   //注意：模拟为地主修改积分
   //landOwner3.score = 100;
   landOwner3.SetScore(-100);
   landOwner3.ShowScore();
    return 0;
}



#ifndef JI3_H_INCLUDED
#define JI3_H_INCLUDED
#include <iostream>
using namespace std;
//用来演示封装的基本概念

ji3.h
class ji3
{ 
  //省略了private
  string name; 
  long score;
  
  int card[20]; 
  
  public :
  LandOwner3();
  ~LandOwner3();
  
  void ShowScore();
  //使用方法/函数来实现对成员变量的封装Get/Set方法
  void SetScore(long lscore) //此处的名字尽量不要与上面相同
  {
      if(lscore < 0){
        //如果传入的积分是非法情况，那么积分默认为0
        score=0;
      }else
      {
      //积分为正数时，才进行赋值操作-这里就通过条件判断封装了score的赋值过程
      }
  score = lscore;
  }
};

  void ji3::ShowScore()
  {
   cout<<name<<"得了"<<score<<"分"<<endl;
  }
  



#endif // JI3_H_INCLUDED
