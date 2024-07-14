// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 问题： 常量类型的确定
    // 例如： 下面的代码，2001到底是int还是short还是float等等呢？
     cout << 2001 << endl;
    // 答案： 在c++ 中，对于常量的类型去顶遵循最小原则：
    // 整数： int < unsigned int < long < unsigned long < long long < unsigned long long
    // 小数： double < long double

    // 注意： 在c++中，常量可以有后缀。
    // U 表示无符号数
    // L 表示long类型或浮点数 long double类型
    // UL unsigned long 类型
    // ULL unsigned long long 类型
    // F float 类型
    // D double 类型 注意：有些编辑器不能写D，不过小数常量默认是double，所以后缀D写不写无所谓

    // 例如：不带后缀的数字类型确定时，整数最小类型是int,小数最小类型是double
    cout << sizeof(10) << endl; // 4字节 说明是int类型
    cout << sizeof(99999999999) << endl; // 8字节 说明是long long类型(windows系统long long 是8字节)
    cout << sizeof(3.14) << endl; // 8字节 说明是double类型


    // 例如： 带有后缀的常量
    cout << sizeof(10L) << endl; // 8字节 10L 是 long类型
    cout << sizeof(3.14F) << endl; // 4字节 是 float类型
    cout << sizeof(3.14) << endl; // 8字节  是double类型

    return 0;

}


