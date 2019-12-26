//reference: 引用：给对象起了一个别名
#include <iostream>
using namespace std;
int main()
{
   // refValue执行int_value,是int_value的另一个名字
   //引用的同时必须初始化，所以使用引用之前不需要测试其有效性，因此使用引用可能比使用指针效率高
   //如 int * num = &abc 还要验证地址是否存在，有可能是假地址 而引用就直接是别名
   //引用不是对象，只是为已经存在的对象起别名
   //引用只能绑定在对象上，不能与计算值或某个表达式结果绑定在一起
   //int &ref_value =10;错误
   //指向常量的引用是非法的
   //double& ref = 100; 错误  指向变量的引用
   //const double& ref = 100; 正确  //表示引用时一个常量类型的引用
   //引用和指针的关系：
   //引用队指针进行了简单的封装，底层仍然是指针
   //获取引用地址时，编译器会进行内部转换
   int num = 108;
   int& rel_num = num;
   rel_num = 118;
   cout<<&num<< '\t' << &rel_num <<endl;
   //真正的运行机制：
   //int num =108;
   //int* rel_num = &num;
   //*real_num = 118;
   //cout << &num<< '\t' <<rel_num <<endl;
}
