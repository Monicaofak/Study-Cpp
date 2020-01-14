//基本的数组查询：增删查改
#include <iostream>
using namespace std;
int main()
 {
 double power[100];//数组的大小一旦确定就不能改变，但是可以声明足够长的数组
                   //这样写之后就不能再pow{1,2,3,4};了
 int powerCount=0; //当前数组中元素个数
 int insertindex=0; //默认插入到第一个元素位置
 double insertpower;  //要插入的数
 power[powerCount++]=45771;
 power[powerCount++]=42322;
 power[powerCount++]=40907;
 power[powerCount++]=40706;

 double temp;
 for(int i=0;i<powerCount;i++)
 {
 for(int j=0;j< powerCount-i-1;j++)
 {
 if(power[j]<power[j+1])
 {
 temp=power[j];
 power[j]=power[j+1];
 power[j+1]=temp;
 }
 }
 }
 cout<<"reorder from big to small:"<<endl;
 for(int i=0;i<powerCount;i++)
    {
    cout<<power[i]<<'\t';
    }
 cout<<endl;

 cout<<"please enter the integer you want to insert:";
 insertindex=powerCount;//先插入到最后面,没有这句话当插入一个最小的数时有bug
 cin>>insertpower;   //插入后保证数组仍然有序：把新数字放在数组末尾，重新进行排序（耗费内存较大）
 for(int i=0;i<powerCount;i++)  //找到第一个比插入数组大的位置，insertindex,
     {
     if(insertpower>power[i])
     {
     insertindex=i;
     break;
     }
     }
     for(int i=powerCount-1;i>=insertindex;i--)//从最后一个元素开始，将数字复制到后面一个元素中
     {
     power[i+1]=power[i];
     }
     power[insertindex]=insertpower;   //将要插入的数字赋值给下标为insertindex的元素
     powerCount++;  //数组总长度加一
     cout<<"after insert:"<<endl;
     for(int i=0;i<powerCount;i++)
     {
     cout<<power[i]<<endl;
     }
     //删除
     //找到要删除元素的下标
     double deletepower;
     int deleteindex =INT_MIN;
     cout<<"please enter the integer you want to delete:";
     cin>>deletepower;
     for(int i=0;i<powerCount;i++)
     {
     if(deletepower==power[i])
     {
     deleteindex=i;
     break;
     }
     }
     if(deleteindex==INT_MIN)
     {
     cout<<"Wrong!"<<endl;
     }
     //从找到的下标开始，后面一个元素赋值给前面一个
     for(int i=deleteindex;i<powerCount-1;i++)
     {
     power[i]=power[i+1];
     }
     //数组总长度减一
     powerCount--;
     cout<<"after delete:";
     for(int i=0;i<powerCount;i++)
     {
     cout<<power[i]<<'\t';
     }
     cout<<endl;
     return 0;
 }
