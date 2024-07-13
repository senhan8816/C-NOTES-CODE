// 预处理指令
#include <iostream>
using namespace std;
int main()
{
    system("chcp 65001");

    // 数据类型
    // 1. 短整型（short）2字节
    // 2. 整型 （int）4字节 常用
    // 3. 长整型 （long）windows为4字节，linux为4字节（32位），8字节（64位）
    // 4. 长长整型 （long long）8字节
    int num = 30;
    // sizeof() 用于返回数据占用的字节。 下面代码输出4，因为定义的是int类型
    cout << sizeof(num) << endl;
    return 0;
}
