// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");
    // 多维数组
    // 多为数组：数组内的每个元素依旧是数组

    // 二维数组
    int v[3][3]; // 一个长度为3的数组中，每一个元素也都是一个长度为3的数组
    // 例如：
    int v1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout << v1[1][2] << endl; // 打印 6

    // 三维数组
    int v2[3][3][3]

    // 还允许更多维的数组，只是一般情况下，三维数组就够用了


    // 多维数组的遍历
    // 可以使用for和while进行嵌套循环对多维数组遍历

    return 0;
}


