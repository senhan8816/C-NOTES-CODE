// 预处理指令
#include <iostream>
using namespace std;
int main()
{
    // c++ 中存在有符号数字和无符号数字
    // 有符号允许负数，无符号不允许负数
    // 比如：
    // [signed] int 有符号整数（[]表示可以不写）
    // unsigned int 无符号整数 （无符号时必写）
    signed int num1 = 100;
    unsigned int num2 = 100;

    // 无符号的int,short,long 有快捷写法（注意：这并不是c++的标准写法，可能报错）：
    // u_short num1 = 100; // 相当于 unsigned short num1 = 100;
    // u_int num2 = 200;
    // u_long num3 = 300;
    // cout << num1 << num2 << num3 << endl;
    return 0;
}
