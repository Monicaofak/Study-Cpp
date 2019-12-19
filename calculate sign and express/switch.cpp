#include <iostream>
using namespace std;
int main()
 {
     //switch开关语句 （type just support int/char）
     //case情况 (just const type)  break:can leave out default：默认 can in any place
     int choice = 9;
     switch(choice)
     {
 case 1:
    cout <<"soldier"<<endl;
    break;
 case 2:
    cout <<"hunter"<<endl;
    break;
 case 3:
    cout <<"koradji"<<endl;
    break;
 case 4:
    cout <<"paster"<<endl;
    break;
 case 5:
    cout <<"knight"<<endl;
    break;
 default:
    cout <<"disappear !"<<endl;
    break;
     }

 }
 
****
conclusion:多重switch：杀鸡刀    多重if：杀牛刀
****

#include <iostream>
using namespace std;
int main()
 {
   //judge the days of a month
   int month = 12;
   switch(month)
   {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
    cout <<"31 days"<<endl;
    break;
   case 2:
    cout <<"29 days"<<endl;
    break;
   case 4:
   case 6:
   case 9:
   case 11:
    cout <<"30days"<<endl;
    break;
   default:
    cout <<"wrong!"<<endl;
   }

 }





