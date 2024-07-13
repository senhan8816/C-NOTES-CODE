// 预处理指令
#include <iostream>
using namespace std;

#define gender 1
#define AGE 18

// 标识符: 符号常量名，变量名，类名，文件名，方法/函数名等都是
// 标识符的命名规范：
// 1. 符号常量 建议全部大写
// 2. 变量 建议下划线命名法，小/大驼峰
// 标识符的命名规则：
// 1. 仅可使用字母，数字，下划线。不能以数字开头
// 2. 不可使用关键字
// 3. 大小写敏感
int main()
{
    system("chcp 65001");
    // 变量
    // 1. 变量的声明
    string name;
    // 2. 变量的赋值
    name = "S.Han";

    cout << "中文问题" << endl;
    return 0;
}
