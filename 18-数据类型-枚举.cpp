// 预处理指令
#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    // 数据类型-枚举
    // 枚举： 本质上是又一个被命名的整型常数的集合
    // 主要作用：枚举可以将一些数字和字符串符号化，从而提供代码的可读性，可维护性和键入性
    // 枚举的语法：
    // enum 枚举名 {
    //     枚举元素1,
    //     枚举元素2,
    //     ...
    //     枚举元素n
    // };
    // 枚举类型为每一个元素，添加一个整数标号，默认从0开始递增。即枚举元素1本质是数字0。

    // 也可以给枚举元素赋值，即枚举元素的值从3开始
    // enum 枚举名 {
    //     枚举元素1 = 3,
    //     枚举元素2,
    //     ...
    //     枚举元素n
    // };

    // 也可以给每个枚举元素赋值
    // enum 枚举名 {
    //     枚举元素1 = 3,
    //     枚举元素2 = 8,
    //     ...
    //     枚举元素n = n
    // };

    enum season {
        SPRING = 5,
        SUMMER = 8,
        AUTUMN = 11,
        WINTER = 14
    };
    int num = 13;
    switch(num) {
        case SPRING:
            cout << "春天" << endl;
        break;
        case SUMMER:
            cout << "夏天" << endl;
        break;
        case AUTUMN:
            cout << "秋天" << endl;
        break;
        case WINTER:
            cout << "冬天" << endl;
        break;
        default:
            cout << "输入错误" << endl;
    }

    return 0;
}


