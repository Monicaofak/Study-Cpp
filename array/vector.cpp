//the succedaneum of array
//向量容器：vector 是一个快速的数组 容器 模板类，大小可以动态扩展
//查询效率不低于数组  可以插入删除元素 其中内置了一些算法
//定义与初始化
//vector<double> vec1;  只能是double类型的数据  （最常用）
//vector<string> vac2(5);  string 类型的，默认分配5个空间
//vector<int> vec3(20,998)  给默认20个元素，每个都是998
#include <iostream>
#include <vector>
#include <algorithm>  //定义sort的头文件
using namespace std;
main()
 {
     vector<double> vecDouble(98.5,67.9,43.6,32.9);
     //向数组中插入数字
     vecDouble.push_back(100.8);  //在数组的尾部插入一个数字
     //遍历
     for (int i; vecDouble.size();i++)  //返回数组的大小有几个元素
     {
     cout << vecDouble[i] <<endl;
     }

//集合的通用遍历方法是：使用迭代器 iterator
//以下是迭代器的基本用法
    vector<double>::iterator it;  //要得到vector<double>类型的迭代器————实际是一个指针对象
    //it,begin  it,endl 返回元素首位元素的迭代器
    for(it = vecDouble.begin(); it!= vecDouble.end();++it)  //从第一个元素开始迭代
   //++写在前，自己的内存增加，不会耗费多余的内存
    {
    cout<< *it<<endl;
    }
    //排序
    sort(vecDouble.begin(),vecDouble.end());
    //逆序
    reverse(vecDouble.begin(),vecDouble.end());
    for(it = vecDouble.begin(); it!= vecDouble.end();++it)  //从第一个元素开始迭代
   //++写在前，自己的内存增加，不会耗费多余的内存
    {
    cout<< *it<<endl;
   
    }
 }

*********************************************************************************************************************
vector的底层实际上是一个指针动态分配的数组
clear()    移除元素中所有的数据
empty()    判断容器是否为空
size()     返回容器中元素的个数
[index]  at[index]  返回索引为index的元素
erase(pos)          删除位置为pos位子出的数据
erase(beg,end)      删除beg end间的数据
front()             返回第一个元素
insert(pos,elem)    在pos位置处插入一个元素
pop_back()          删除最后一个元素
push_back(elem)     在容器末尾插入一个元素
resize(num)         重新设置容器大小
 begin()  end()     返回元素首尾元素的迭代器






