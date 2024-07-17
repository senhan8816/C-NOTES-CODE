// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 结构体数组（存放结构体的数组）
    // 语法：
    // 声明结构体数组： [struct] 结构体类型 数组名[数组长度]  （struct可以忽略）
    // 赋值数组中的每一个元素: 数组名[0] = {...,...}
    // 声明和赋值同步：
    // [struct] 结构体类型 数组名[数组长度] = {{},{}}
    struct Student {
        string name;
        int age;
    };
    struct Student stus[2] = {{name:"zs",age:18},{name:"ls",age:20}};

    return 0;



}


