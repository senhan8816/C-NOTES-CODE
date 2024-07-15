// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // goto语句
    // 前面的continue和break，在程序中执行有条件跳转
    // C++提供了goto语句，可以实现无条件跳转

    int i = 1;
    abc: //这里是打标签
    cout << i << " ";
    i++;
    if(i <= 10) {
        // 当代码执行到这一行，程序会跳回到abc的位置继续执行
        // 注意:
        // 1. 即可以跳到上面的标签，也可以跳转到goto下面的标签
        // 2. goto只能在当前函数作用域中执行
        goto abc;
    }
    cout << endl;
    return 0;
}


