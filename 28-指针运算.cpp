// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 指针运算
    // 指针变量中虽然存放的是内存地址，但是仍可以进行基础的数学计算
    // 指针运算是对指针的基础型操作，非常适合操纵数组并配合做动态内存分配

    // 指针可以进行 +/- 运算
    // 例如：
    int num = 10;
    int *p = &num;
    cout << p << endl; // 结果： 0x20d1ff6e4  现在是尾数是4
    p++;
    cout << p << endl; // 结果： 0x20d1ff6e8  现在变成8了
    p--;
    cout << p << endl; // 结果： 0x20d1ff6e4  又变成4了

    // 指针进行加减运算的结果，和指针指向内存区域的数据类型有关，以加法为例
    // char 类型指针+1 地址+1 ，因为char类型占1个字节
    // int 类型指针+1 地址+4， 因为int类型占4个字节
    // double 类型指针+1 地址+8， 因为double类型占8个字节


    // 指针运算的作用： 对数组的操作
    int arr[] = {1,2,3,4,5};
    int *ap = arr; //这里 arr 中本来就存储了数组第一个元素的数组，所以直接使用arr变量给指针变量赋值
    cout << *ap << endl; // 输出 1
    cout << arr[0] << endl; // 输出

    // 对指针变量加1，则可以找到数组中第二个元素
    cout << *(ap + 1) << endl; // 输出 2
    cout << arr[1] << endl; // 输出 2

    return 0;

}


