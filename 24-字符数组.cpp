// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");


    // 字符数组
    // 字符串本质是字符数组的形式存在
    // 注意： 通过C语言方式定义的字符串。最后一位会额外添加一个\0作为结束标记，所以字符数组的长度会多一位

    char str[] = "hello";
    // 上面的代码等价于下面的代码
    // char str[] = {'h','e','l','l','o','\0'};
    cout << sizeof(str) << endl; //输出为6

    char c[] = {'h','e','l','l','o'};
    cout << sizeof(c) << endl; //输出为5

    // 注意： 中文不要使用字符数组，直接使用string

    return 0;
}


