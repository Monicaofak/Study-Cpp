//控制台编写，实现增删查改
//游戏持续78个月  安排每月行程   成为公主或其他角色！
#include <iostream>
#include <iomanip> // control the export form
#include <ctime>
#include <vector>
#include <cstdlib>
#include <array>
using namespace std;
int main()
 {
  //1.set the father and daughter s' name
  string value_father_name;
  string value_girl_name;

  //input the basic information of girl
  int value_birth_month =6;
  int value_birth_date=6;
  string value_girl_constell;
  //女儿的体力、智力、魅力、气质、道德
  int value_girl_array[5]={};
  array<string,5> value_array_baseinfo_names={"体力","智力","魅力","道德","气质"};

  int value_girl_money=500;
  string constell_names[12][2] = {
        {"山羊座","水瓶座"},   //1
        {"水瓶座","双鱼座"},   //2
        {"双鱼座","白羊座"},   //3
        {"白羊座","金牛座"},   //4
        {"金牛座","双子座"},   //5
        {"双子座","巨蟹座"},   //6
        {"巨蟹座","狮子座"},   //7
        {"狮子座","处女座"},   //8
        {"处女座","天秤座"},   //9
        {"天秤座","天蝎座"},   //10
        {"天蝎座","射手座"},   //11
        {"射手座","山羊座"}  //12
  };
  int choice,temp1,temp2,temp3;
  int solidCount;
  cout << "father's name:"<<endl;
  cin >> value_father_name;
  cout <<"girl's name:"<<endl;
  cin >>value_girl_name;
  cout <<"The girl's birthday:m d"<<endl;
  cin >> value_birth_month>>value_birth_date;

  //the days stride constellations in every month
  int constell_datas[] {20,19,21,20,21,23,23,23,24,23,22};
  value_girl_constell=constell_names[value_birth_month-1][value_birth_date/constell_datas[value_birth_month-1]];

  cout<<"The informations of girl:"<<endl;
  cout<<"name:"<<value_girl_name<<endl;
  cout<<"birthday:1659."<<value_birth_month<<"."<<value_birth_date<<endl;
  cout<<"constellations"<<value_girl_constell<<endl;
  //低维是月份减一，生日/分界日期 =0 ：不到那天

  //根据女儿的生日设置各项基本参数
  if(value_girl_constell=="白羊座"){
    value_girl_array[0] =80; value_girl_array[1]=15;value_girl_array[2]=15;value_girl_array[3]=25;value_girl_array[4]=11;
  }else if(value_girl_constell=="金牛座"){
    value_girl_array[0] =46; value_girl_array[1]=30;value_girl_array[2]=28;value_girl_array[3]=35;value_girl_array[4]=20;
  }else if(value_girl_constell=="双子座"){
    value_girl_array[0] =50; value_girl_array[1]=35;value_girl_array[2]=23;value_girl_array[3]=26;value_girl_array[4]=8;
  }else if(value_girl_constell=="巨蟹座"){
    value_girl_array[0] =40; value_girl_array[1]=31;value_girl_array[2]=33;value_girl_array[3]=23;value_girl_array[4]=17;
  }else if(value_girl_constell=="狮子座"){
    value_girl_array[0] =85; value_girl_array[1]=9;value_girl_array[2]=11;value_girl_array[3]=28;value_girl_array[4]=20;
  }else if(value_girl_constell=="处女座"){
    value_girl_array[0] =35; value_girl_array[1]=28;value_girl_array[2]=36;value_girl_array[3]=19;value_girl_array[4]=18;
  }else if(value_girl_constell=="天秤座"){
    value_girl_array[0] =42; value_girl_array[1]=33;value_girl_array[2]=25;value_girl_array[3]=24;value_girl_array[4]=32;
  }else if(value_girl_constell=="天蝎座"){
    value_girl_array[0] =50; value_girl_array[1]=25;value_girl_array[2]=40;value_girl_array[3]=20;value_girl_array[4]=18;
  }else if(value_girl_constell=="射手座"){
    value_girl_array[0] =57; value_girl_array[1]=31;value_girl_array[2]=15;value_girl_array[3]=26;value_girl_array[4]=19;
  }else if(value_girl_constell=="山羊座"){
    value_girl_array[0] =56; value_girl_array[1]=21;value_girl_array[2]=16;value_girl_array[3]=22;value_girl_array[4]=25;
  }else if(value_girl_constell=="水瓶座"){
    value_girl_array[0] =43; value_girl_array[1]=43;value_girl_array[2]=20;value_girl_array[3]=27;value_girl_array[4]=23;
  }else if(value_girl_constell=="双鱼座"){
    value_girl_array[0] =41; value_girl_array[1]=21;value_girl_array[2]=29;value_girl_array[3]=25;value_girl_array[4]=23;
  }
  for(int i=0;i<5;i++){
    cout<<value_girl_array[i]<<'\t';
    cout<<endl;

  }


  //circulate
  //game begin from 1659
  for(int year=1659;year<=1659+7;year++){
    for(int month=(year==1659)?6:1;month<=12;month++){
        //当前年份为1659，月从6月开始，否则从一月开始
        //判断本月是否是女儿的生日
        if(month==value_birth_month){
            cout<<"This month is"<<value_girl_name<<"'s birthday,would you give she a gift?"<<endl;
            //judege....
        }
        //显示游戏主菜单
        cout<<"\n1.check the status\n2.arrange the route\n3.communication\n4.conservation\n5.read"<<endl;
        cin>>choice;
        switch(choice){
    case 1:   //check the status
        cout<<"The information of girl:"<<endl;
        cout<<"name:"<<value_girl_name<<endl;
        cout<<"birthday:"<<value_birth_month<<"-"<<value_birth_date<<endl;
        cout<<"constellation"<<value_girl_constell<<endl;
        cout<<"money"<<value_girl_money<<endl;
        //print the nature
        cout:left;
        for(int i=0;i<5;i++){
           cout<<value_array_baseinfo_names[i]<<":"<<setw(6)<< value_girl_array[i];
           solidCount=value_girl_array[i] /10;
           for(int j=0;j<10;j++){
            if(j < solidCount)
                cout<<"■";
            else
            cout<<"□";

           }
           cout<<endl;
        }
        break;
        case 2://arrange route,3 routes most a minth
            {
                string month_parts[]={"上旬","中旬","下旬"};
                int num;
                for(int i=0;i<3;i++)
                {
                cout<<"--"<<month<<"月--"<<month_parts[i]<<endl;
                cout<<"1.study wushu\n2.go to cshool\n3.study rite\n4.practice out city\n5.earn money"<<
                cout<<"please choice!";
                cin>>choice;
                //没钱，强制打工
                srand(time(NULL));
                if(choice==1)//+体力、魅力 -钱
                {
                value_girl_array[0]+=temp1=rand() % 11;//rand :0-32767
                value_girl_array[2]+=temp2=rand() % 11;//% 11 0-10
                value_girl_money-=temp3=rand() % 51;    //%51 0-50
                cout<<"study wugong!!!!"<<endl;
                cout<<"体力+"<<temp1<<",魅力+"<<temp2<<",金钱-"<<temp3<<endl;
                }else if(choice==5)
                {
                value_girl_money+=temp3=rand() % 101;
                cout<<"though work earned"<< temp3<<"money!"<<endl;
                }

                }

            break;
            }
        case 3:
            break;
        case 4:
            break;
        case 5:
        break;
        default:
        break;

        }
    }
  }
  //judge the game result from data
  int sum=0;
  for(int i=0;i < 5;i++)
  {
  sum += value_girl_array+[i];
  }
  if(sum >=2000)
  {
  cout<<"The best result of the game:be the queen! "<<endl;
  }else if(sum >= 1800 && sum <2000)
  {
  cout<<"The second result of the game:rani"<<endl;
  }else  if (sum>=1200 &&sum<=1600) //皇家学院总裁:属性总数1200-1600，智力最高，且体力>智力
  {
  int maxValue= value_girl_array[0];
  int maxIndex = 0;
  for(i=0;i<5;i++)
  {
  if(maxValue < value_girl_array[i])
  {
  maxValue =value_girl_array;
  maxIndex =i;
 
  }
  }
  if("道德"==value_girl_array[maxIndex] && value_girl_array[2] > value_girl_array[4])
  {
  cout<<"after the long practice,grown up to a CEO of imperial college! <<endl;
  }
  }
 }
