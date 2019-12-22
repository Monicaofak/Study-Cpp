//使用二维数组
#include <iostream>
using namespace std;
main()
 {
  string stu_names[] {"Lily","Marry","Monica"};
  string course_names[]{"math","English","Chinese"};
  const int ROW = 3; //sizeof(stu_names) / sizeof(stu_names[0])
                    //  数组总长度除以第一个元素长度 但数组元素长度各不相同时不准确
  const int COL=3;
  double scores[ROW][COL];
  for(int i = 0; i < ROW;i++)
  {                      //外层循环控制学生
  for(int j = 0;j < COL;j++)
  {                       //内层循环控制哪一门课
  cout<<stu_names[i]<<"'s"<<course_names[j]<<"grades"<<endl;
  cin>>scores[i][j];
  }
  }
  //打印结果
  cout<<'\t';
  for(int i = 0;i <COL; i++)
  {
  cout<<course_names[i]<<'\t';
  }
  cout<<endl;
  for(int i=0; i< ROW; i++)
  {
      cout <<stu_names[i] <<'\t';
  for(int j=0; j < COL;j++)
  {
  cout<<scores[i][j] <<'\t';
  }
  cout<<endl;
  }


 }
