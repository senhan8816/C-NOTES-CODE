// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 指针练习： 使用指针遍历这两个数组
    int v1[] = {11,22,33,44,55,66,77,88,99};
    char v2[] = {'a','b','c','d','e'};

    // int *p = v1;
    // for(int i = 0; i < sizeof(v1) / sizeof(*p)  ;i++) {
    //      cout << *(p + 1 * i) << endl;
    // }

    char *p2 = v2;
    for(int i = 0; i < sizeof(v2) / sizeof(*p2)  ;i++) {
         cout << *(p2 + 1 * i) << endl;
    }




    return 0;

}


