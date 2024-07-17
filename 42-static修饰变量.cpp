// 预处理指令
#include <iostream>
using namespace std;
int * add(int x, int y) {
    static int sum = x + y;
    return &sum;
}

int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // static关键字修饰变量
    // 当static修改变量，比如函数内的局部变量，可以延长其生命周期到整个程序进行周期
    // 写法：
    // int * add(int x, int y) {
    //     static int sum = x + y;
    //     return &sum;
    // }
    // 这样也可以解决局部变量的生命周期问题
    int *p = add(2,3);
    cout << *p << endl;
    return 0;



}


