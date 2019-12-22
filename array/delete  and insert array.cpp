//实现数组元素的插入和删除
#include <iostream>
using namespace std;
main()
{
   //数组的大小一旦确定就不能再更改了，但可以给数组预留足够空间
   double power[99];
   int powerCount = 0; //当前数组中的元素个数
   double insertPower;   //要插入的数初始化
   int insertindex = 0;  //默认插入到第一个元素位置
   power[powerCount++] =45771;
   power[powerCount++] =42322;
   power[powerCount++] =40907;
   power[powerCount++] =40706;

   double m;
   for(int i = 0; i< powerCount;i++)
   {
   for(int j = 0;j < powerCount -i -1;i++)
   {
   if(power[j] < power[j+1])
   {
   m = power[j];
   power[j] = power[j+1];
   power[j+1] =m;
   }
   }
   }
   cout<<"从大到小排序后："<<endl;
   for(int i=0; i < powerCount;i++)
   {
   cout << power[i]<<'\t';
   }
   cout<<endl;
   //插入
   //插入新数字后保证数组仍然有序
   cout<<"请输入要插入的数字：";
   insertindex = powerCount;  //插入最小的数字时插到最后
   cin >>insertPower;
   //1.找到第一个比插入数字大的位置insertindex，
   for(int i = 0;i < powerCount;i++)
   {
   if(insertPower > power[i])
   {
   insertindex = i;
   break;
    //2.从最后一个元素开始，把数字依次复制到后面一个元素中，将要插入的数字赋值给下标为insertindex的元素
   }
   }
   for(int i = powerCount - 1;i >=insertindex; i--)
   {
   power[i+1] =power[i];
   }
   //3.将要插入的数字赋给下标为insertindex的元素
   power[insertindex] = insertPower;
   //4.将数组的总长度加+1
   powerCount++;
    cout<<"插入后："<<endl;
   for(int i=0; i < powerCount;i++)
   {
   cout << power[i]<<'\t';
   }
   cout<<endl;
   //delete
   //1.找到要删除的元素下标
   double deletepower;
   int deleteindex = INT_MIN;
   cout<<"请输入要删除的数字：";
   cin>>deletepower;
   for(int i = 0; i< powerCount;i++)
   {
   if(deletepower == power[i])
   {
   deleteindex = i;
   break;
   if(deleteindex ==INT_MIN)
    {
    cout<<"没有找到要删除的元素，删除失败！"<<endl;
   }else
   {
   //2.从找到的下标开始后面一个元素赋值给前一个，
   for(int i=deleteindex; i < powerCount - 1;i++)
   {
   power[i] = power[i+1];
   }
    //3.总长度-1
   powerCount--;
   }
   }
   }
   cout<<"删除后："<<endl;
   for(int i=0; i < powerCount;i++)
   {
   cout << power[i]<<'\t';
   }
   cout<<endl;

}
