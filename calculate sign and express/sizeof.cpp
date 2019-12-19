#include <iostream>

using namespace std;

int main()
 {
  cout<< sizeof(double) <<endl;
  cout<< sizeof(12) <<endl; //int occupy 4 bit
  cout<< sizeof(0.8) <<endl;//double occupy 8 bit
  cout<< sizeof(true) <<endl; //bool type occupy 1bit
  cout<< sizeof('\n') <<endl; //char
  cout<< sizeof("abc")<<endl; //string 后面默认\0 所以加一
 }
