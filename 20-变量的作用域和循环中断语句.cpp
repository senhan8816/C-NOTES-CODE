// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 变量的作用域
    // {}称称之为代码块，也是内部变量的作用域
    // 内部可以访问外部变量，外部无法访问内部变量
    // 注意： for循环中小括号中声明的变量，属于for循环内部的变量

    // 循环中断语句
    // continue和break
    // continue 不执行continue后面的代码，继续执行下一次循环
    // break 直接中止循环
    return 0;
}


