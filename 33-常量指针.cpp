// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // const指针
    // const指针是C++关键字，被译为常量，const指针即表示：常量指针

    // 1. 指向const的指针： 表示指向区域的数据是不变的，但是可以更改指向
    // 语法：
    // const 数据类型 * 指针
    // 数据类型 const * 指针
    // 例如：
    int num1 = 10,num2 = 100;
    const int *p = &num1;
    //*p = 20; // 这里就报错了，不可以改变指针对应的值
    p = &num2; // 这里可以运行，可以改变指针的指向

    // 2. const指针： 指针本身不可更改，但是指向的数据可以更改
    // 语法：
    // 数据类型 * const 指针 = 地址 必须初始化地址，应该地址不能改
    // 例如：
    int num3 = 20, num4 = 200;
    int * const p1 = &num3;
    // p1 = &num4; //这里就报错了，因为地址不可以改
    *p1 = 30; //这里可以运行，可以改值
    cout << *p1 << endl;

    // 指向const的const指针： 指针和指向区域的值，都不可更改
    // 语法：
    // const 类型 * const 指针 = 地址
    // 例如：
    int num5 = 30, num6 = 300;
    const int * const p2 = &num5;
    // p2 = &num6; //这里就报错了，因为地址不可以改
    // *p2 = 30; //这里也报错，值也不能改
    cout << *p2 << endl;
    return 0;



}


