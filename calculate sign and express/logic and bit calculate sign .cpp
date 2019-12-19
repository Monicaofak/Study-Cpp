#include <iostream>

using namespace std;

int main()
 {
 cout<< (4 & 5) <<endl;
 cout<< (4 | 5)<<endl;
 cout<< ~ 2 <<endl;  //按位非~:1.二进制取反，但是是8位取反 00000010
 cout<< (2 << 3) <<endl;  //第一位是符号位 0：正 1：负          11111101
                     //2.负数二进制转化为十进制：将二进制取反，然后加一，结果为负
                     // 00000010 +1 =11 十进制为3 负数-3
 }

  //logic calculate sign: 且&&       或|       非!
    //bit calculate sign: &
    //example:4 & 5 = 4              4||5 = 5   0 turn 1,1 turn 0
    //       100  101                100
    //       101                     101
    //       100(两边都为1，才为1)   101(有1则1)
    //按位异或 同0（假） 异1（真）
    //'<<' 左移      右移'>>' 区分cout 与cin 中位=是插入运算符 此处运算符重载了
    //both side are figures:move right or left
    // 2 << 3  把二转成二进制，左移三位
    //  10. 小数点左移三位 10000 转成十进制2^4 =16
