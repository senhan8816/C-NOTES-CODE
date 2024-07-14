// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 字符串拼接：
    // 只需要使用+号进行连接即可
    string str1 = "no";
    string str2 = "comment";
    string str3 = str1 + " " +  str2 + " !";
    cout << str3 << endl;

    // +号仅使用与字符串之间的拼接。如果要连接非字符串，需要将内容转换为字符串。可以使用C++内置的to_string()函数将内容转换为字符串类型
    int age = 18;
    string name = "zs";
    string desc = to_string(age) + name ;
    cout << desc << endl;
    return 0;

}


