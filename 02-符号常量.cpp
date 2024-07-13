// 预处理指令
#include <iostream>
using namespace std;

// 符号常量
// 介绍： 使用标识符去定义的常量，称为符号常量
// 定义语法： #define 标识符（常量名） 常量值

// 定义符号常量
// 注意:
// 1.符号常量定义在代码头部
// 2.定义符号常量的代码后面不需要加;
// 3. 符号常量的值不可以被修改
#define gender 1
#define AGE 18
int main()
{
    // 解决中文乱码问题：
    // 方式一：
    cout << gender << "," << AGE << "中文问题" << endl;
    return 0;
}
