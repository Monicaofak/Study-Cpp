#include <iostream>

using namespace std;

int main()
 {
  //Write a program to judge whether the word user inter is true disk sign
  char pan ='\0'; //默认空字符设置为空 空字符：ASCCL码为0的字符
  cout<<"please inter a sign"<<endl;
  cin >> pan;
  // 'A'~'Z'
  if ( 'A' <= pan && pan <= 'Z')  //65 <=pan && pan <= 65+26

  {
      cout<<"legal disk sign!"<<endl;
  }
    else
    {
    cout<<"illegal disk sign!"<<endl;
    }
  }
  
****

#include <iostream>
using namespace std;
int main()
 {     //shopping chart
 double price1 = 35000.0;
 double hemes = 11044.5;
 double chanel = 1535.0;
 double total = 0;
 total = price1 + hemes + chanel;
     //if add up to 5w,30% off,else 10% off
 if (total > 50000)
 {
 cout<<total * 0.7<<endl;
 }
  else
  {
  cout<<total*0.1<<endl;
  }
 }
 
 ****
 
 #include <iostream>
using namespace std;
int main()
 {
   //
   double flowerPrice;
   //print story
   cout <<"the darkness before dawn fades gradually,a lightness between sky and sea is wonderful"<<endl;
   cout <<"boy sent flowers to girl ,girl asked the price"<<endl;
   cin>> flowerPrice;
   if(flowerPrice >= 5000 &&  flowerPrice <10000)
   {
   cout<<"I like you!"<<endl;
   }
   else if(flowerPrice >= 10000 && flowerPrice <= 50000)
   {
   cout<<"I love you!"<<endl;
   }
   else
   {
   cout<<"marry me"<<endl;
   }
 }
 ****
  emphasize the '{}'
 ****
 #include <iostream>
using namespace std;
int main()   
 {
   int a =5, b = 10;  //means int a =5,b = 10;
   if (a > b)         //  if(a>b)
   if (a++ > --b)     // {
   a+=b;
   cout<<a<< '\t' <<b<<endl;//  if(a++ > --b)
 }                   //   {
                    //     a+=b;
                    //     }
                      // }



 
