// 预处理指令
#include <iostream>
using namespace std;

#define gender 1
#define AGE 18

int main()
{
    system("chcp 65001");
    // 变量
    // 1. 变量的声明
    string name;
    // 2. 变量的赋值
    name = "S.Han";

    // 声明并赋值
    float n = 6.6;
    // 变量中存储的值可以被修改，但是类型不能修改
    n = 8.8;
    n = n - 2;

    // 一次性声明多个变量
    int n1,n2,n3;
    // 一次性生命多个变量并赋值
    char a = 'a', b = 'b', c = 'c';
    string d,f = "df";

    cout << a << b << c << d << f << "，中文问题" << endl;
    return 0;
}
