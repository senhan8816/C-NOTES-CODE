// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 数据类型：实型
    // float 有效位数：6~7  4字节  单精度浮点数
    // double 有效位数：15~16  8字节  双精度浮点数
    // long double 有效位数：18~19  16字节  多（长）精度浮点数
    // 注意： 实型数据没有signed和unsigned,默认全部有符号
    // 注意： double和long double的有效位数仅做参考，ANSI C 标准仅要求他们最少实现8字节，具体有效范围取决于所用编辑器对标准的实现
    // 以float为例：
    float num1 = 1234567890; //这里写了10个位，但是float有效位时6~7
    //由于num1位数超出了有效位，默认输出科学计数法 1.23457e+09。
    cout << fixed; //使用这个设置为小数显示
    cout << num1 << endl; //1234567936.000000 可以看到7后面显示就不正确了
    // 以long double 为例
    long double num2 = 1234567890.1234567890;
    // 这里可以看到long double 确实实现了16字节， 但是位数没有18位
    cout << num2 << ',' << sizeof(num2) << endl;


    return 0;

}


