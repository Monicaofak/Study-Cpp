#include <iostream>
using namespace std;
int main()
 {
 string toName,content,chatMsg;
 cout<<"请输入对方的名称：";
 getline(cin,toName);
 cout<<"请输入发送给对方的聊天信息：";
 getline(cin,content);
 chatMsg=chatTo(toName,content);
 cout<<endl<<chatMsg<<endl;
 }
string chatTo(const string& toName,const string& content);
//跟某人聊天，第一个参数是聊天对象的昵称，第二个是聊天内容
//const 函数只负责字符串拼接（聊天格式）
//按某规定的格式，拼接聊天信息后的字符串
string chatFrom(const string& fromName,const string& content)
 {
 string msg="☆ 你悄悄地对[" + toName+"]说："+content;
 return msg;
 }
