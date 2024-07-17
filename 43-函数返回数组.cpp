// 预处理指令
#include <iostream>
using namespace std;


int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 函数返回数组
    // 由于数组对象本身是第一个元素的地址，所以返回数组本质上就是返回指针
    // int * func() {
    //     return arr;
    // }
    // 注意：
    // 1.返回的数组不可以是局部变量，可以是全局数组或static修饰的数组
    // 2.不推荐返回数组，最好直接使用全局作用域的数组
    return 0;



}


