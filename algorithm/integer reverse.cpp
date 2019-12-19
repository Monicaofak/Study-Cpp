#include <iostream>
using namespace std;
int main()
{
   int num,right;
   cout <<"please enter an integer:"<<endl;
   cin >>num;
   do {
    right = num % 10;
    cout << right;
    num = num/10;
   }
   while(num !=0);
   cout<<endl;
}
