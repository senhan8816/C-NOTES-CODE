// 预处理指令
#include <iostream>
using namespace std;
// int * add(int x, int y) {
//     int sum = x + y;
//     return &sum;
// }
int * add(int x,int y) {
    int * sum = new int;
    *sum = x + y;
    return sum;
}
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 返回指针的函数及局部变量的生命周期

    // 函数可以返回指针
    // 语法：
    // 返回值类型 * 函数名(形参列表) {
    //     return 指针
    // }
    // 例如：
    // int * add(int x,int y) {
    //     int sum = x + y;
    //     return &sum;
    // }
    // 注意： 上面的代码实际上是有问题的。因为sum是add函数的局部变量，所以外部不能使用函数内部的变量或指针
    // 想要解决上面提到的问题，可以使用动态内存分配。因为动态分配的内存不会被释放掉
    // int * add(int x,int y) {
    //     int * sum = new int;
    //     *sum = x + y;
    //     return sum;
    // }

    int * p = add(1,2);
    cout << *p << endl;
    delete p;
    return 0;



}


