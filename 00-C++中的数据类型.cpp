// 预处理指令
// iostream 提供了cout和cin
#include <iostream>
using namespace std;
// C++文件如何转换称可运行的二进制文件？
// 1. 编译器先处理预处理语句，将对应的文件内容拷贝到代码文件中
// 2. 开始编译，将c++代码转化为实际机器代码，每一个.cpp文件会被编译成.obj文件
// 3. 把所有的.obj文件合并成一个.exe(windows平台)文件

int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // << 叫做重载运算符
    // 将hello world 推送到cout流中，然后打印，然后再推送一个换行
     cout << "hello world" << endl;
     cin.get(); // 在前往下一行代码之前等待，此时代码暂停执行。直到按下回车键

    // C++中的数据类型：
    // 1. 基本数据类型:int，float,double,char, string,bool等
    // 2. 符合数据类型：结构体，联合体等
    // 3. 指针类型：int*, char*，float* 等
    // 4. 枚举类型：enum

    // main函数中也可以不写return 0，不写的话，默认return 0;
     return 0;
}


