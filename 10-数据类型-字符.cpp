// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 数据类型-字符型（char）
    // char 类型支持有符号和无符号
    //（signed) char 1字节
    // unsigned char 1字节
    // 注意： char类型本质上是数字。在内存中存储的实际上是数字。通过ASCII表进行映射

    char a = 97; // 97在ASCII表中对应的是字符a
    char ch = 'a';
    cout << ch << endl; //输出 a
    cout << ch + 1 << endl; //输出的是98. 因为a在ASCII表中对应97，+1就变成了98
    return 0;

}


