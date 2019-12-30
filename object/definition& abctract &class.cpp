//什么是面向对象？
//面向对象，时基于对象的概念，以对象为中心，以类和继承为构造机制，来认识、理解、
//刻画客观世界和设计、构建相应的软件系统（模拟现实）
//1.对象是由数据和允许的操作数组成的封装体，与客观实体有直接对应关系
//2.面向对象不是某一尅语言的特性，而是一种编程思想
//面向对象采用运行阶段决策，不仅要考虑如何表示这些数据，还好考虑如何使用这些数据（属性、行为）
//面向过程采用编程极端编程，首先考虑要遵循的步骤，然后考虑如何表示这些数据


*********************************************************************************************************************************
//main.cpp中
//抽象：从具体事物抽取共同点本质特征、
//类：类是一种将抽象转换为用户定义类型的工具，将数据表示和操纵数据的方法组合成
//一个整体
//类的实例为对象   类中的变量和函数称为成员
//类的声明
//class 类名{};       class LandOwner{};
//struct 类名{}；     struct Hero{};
//class与strict唯一的区别：使用class声明的类型默认成员是私有的(private)，而struct
//声明的类型默认是公有的(public)
#include <iostream>
#include "ji1.hpp"  //如果要使用类，必须要包含类的头文件
#include "ji2.h"
using namespace std;
int main()
{

    //LandOwnerV1 landOwner1;//声明了一个LandOwner类型的变量叫landOwner1
    //调用对象的成员方法
      //int cards[20];  类外不能使用对象的私有成员
   // landOwner1.TouchCard(100);
   ji2 landOwner2;
   landOwner2.name = "于谦";
   landOwner2.TouchCard(20);
   return 0;
}

//ji1.hpp中
//此文件中创建时取消勾选Generate implementation file
#ifndef JI1_H
#define JI1_H
#include <iostream>
using namespace std;

//.hpp文件一般包含实现的内联函数，通常用于模板类这种声明与实现共存的情况
//建议：只要不是纯模板，一律使用.h作为头文件后缀，使用.cpp文件作为函数的实现文件
class LandOwnerV1
{
    private:
        string name;
        long score;
        int cards[20];
    public:
        LandOwnerV1(){}   //默认构造函数的实现
        ~LandOwnerV1(){}   //析构函数的实现
        inline void TouchCard(int cardCount)  //成员函数如果在定义时直接实现，
        //那么写不写inline都是内联函数
        {
        //暂时省略
        cout<<name<<"摸了"<<cardCount<<"张牌"<<endl;
        }
        void ShowScore() {
        cout<<name<<"当前的积分是"<<score<<endl;
        }
};

#endif // JI1_H




//ji2.h中
//此文件中创建时要勾选Generate implementation file
//.h函数一般只声明不实现函数
#ifndef JI2_H
#define JI2_H
#include <iostream>
using namespace std;


class ji2
{
    public:
        string name;
        long score;
        int cards[20];
    public:
        ji2();   //构造函数的声明
        ~ji2(); //析构函数的声明
        void TouchCard(int ); //声明摸牌方法
        void ShowScore();      //声明的显示积分方法
};

#endif // JI2_H


//ji2.h中
#include "ji2.h"

ji2::ji2()
{
    //ctor
}
//实现摸牌方法
void ji2::TouchCard(int cardCount)
{
  cout<<name<< "摸了"<<cardCount<<"张牌"<<endl;
}
ji2::~ji2()
{
    //dtor
}
