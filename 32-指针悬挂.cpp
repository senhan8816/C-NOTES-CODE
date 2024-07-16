// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 指针悬挂：指针指向区域已经被回收
    int *p1 = new int;
    *p1 = 10;
    int *p2 = p1;
    delete p1; //此时对应的内存空间都被移除了
    // p1和p2指针悬挂。他们还存着那块内存的地址
    cout << p1 << ',' << p2 << endl ;

    

    return 0;



}


