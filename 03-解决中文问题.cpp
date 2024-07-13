// 预处理指令
#include <iostream>
#include "windows.h"
using namespace std;

#define gender 1
#define AGE 18
int main()
{
    // 解决中文乱码问题：
    // 方式一：引入windows.h库，使用下面的函数
    // SetConsoleOutputCP(CP_UTF8);
    // 方式二： system("chcp 65001")
    // 注意： linux系统中没有中文乱码问题，也没有windows.h库
    system("chcp 65001");  
    cout << gender << "," << AGE << "中文问题" << endl;
    return 0;
}
