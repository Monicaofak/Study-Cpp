#include <iostream>
using namespace std;
int main()
 {
  //inter 3 numbers,export these numbers from small to big
  int a,b,c,t;
  cout<<"please inter three numbers"<<endl;
  cin>>a;
  cin>>b;
  cin>>c;
  cout<<"these three number are"<<a<< b<< c;
  if(a>b)
  {
  t=a;
  a=b;
  b=t;
  }
  if(a>c)
  {
  t=a;
  a=c;
  c=t;
  }
  if(b>c)
  {
  t=b;
  b=c;
  c=t;
  }
  cout<<"from small to big are:"<< a<< b<< c;
  return 0;
 }

