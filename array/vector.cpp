//the succedaneum of array
//向量容器：vector 是一个快速的数组 容器 模板类，大小可以动态扩展
//查询效率不低于数组  可以插入删除元素 其中内置了一些算法
//定义与初始化
//vector<double> vec1;  只能是double类型的数据  （最常用）
//vector<string> vac2(5);  string 类型的，默认分配5个空间
//vector<int> vec3(20,998)  给默认20个元素，每个都是998
#include <iostream>
#include <vector>     //vector的头文件
#include <algorithm>   //iterator 的头文件
using namespace std;
int main()
 {
     //遍历
 vector<double>vecdouble{98.5,67.6,43.6,32.9};
 vecdouble.push_back(100.8);   //在数组尾部插入一个元素
 for(int i=0;i<vecdouble.size();i++)
 {
 cout<<vecdouble[i]<<endl;
 }
 vector<double>::iterator  it;//要得到vector<double>类型的迭代器,迭代器实际是一个指针对象
 //从第一个元素开始迭代
 for(it=vecdouble.begin();it!=vecdouble.end();++it)//++在后会导致缓存的增加，写在前面是自己的内存增加
 {
 cout<<*it<<endl;         //因为迭代器实际是一个指针对象
 }
 //排序
 sort(vecdouble.begin(),vecdouble.end());
 for(it=vecdouble.begin();it!=vecdouble.end();++it)
 {
 cout<<*it<<endl;
 }
 sort(vecdouble.begin(),vecdouble.end());
 reverse(vecdouble.begin(),vecdouble.end());//逆序
 for(it=vecdouble.begin();it!=vecdouble.end();++it)
 {
  cout<<*it<<endl;
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






