//指针的算术运算（指针的平移）
//指针的递增和递减(++,--)
#include <iostream>
using namespace std;
int main()
 {
 int i;
 double score[5]{98,87,65,43,76};
 double* ptr_score;
 ptr_score=score;
 for(i=0;i<5;i++)      //后置++,先取其地址，指针平移到后面，再++，再平移
 {
 cout<<*ptr_score++<<endl;  //一个类型为T指针移动的空间刚好是T元素的大小
 }                  //指针并不是一个整型，指针描述的是一个位置
 }


//指针加上或减去某个整数值
#include <iostream>
using namespace std;
int main()
 {
     int i;
     double score[5]={98,87,65,43,76};
     double* ptr_score;
     ptr_score=&score[1];
     ptr_score+=2;
     cout<<*ptr_score<<endl;
     ptr_score-=3;
     cout<<*ptr_score<<endl;
     cout<<*(ptr_score+30)<<endl;  //会乱指
 }
