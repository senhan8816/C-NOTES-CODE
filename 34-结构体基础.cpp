// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 结构体（struct）
    // 是一种用户自定义复合数据类型，可以包含不同类型的不同成员

    // 语法：
    // struct 结构体类型 {
    //     成员类型 成员名称;
    //     ...
    //     成员类型 成员名称;
    // };

    // 示例：
    // 1. 声明结构体
    struct Student {
        string name;
        int age;
        string gender;
    };
    // 2. 声明结构体变量
    // 结构体变量的声明，可以在起那面带上struct关键字（可以忽略不写），建议协商，这样代码可读性更好
    struct Student stu; // 结构体变量
    // 3. 给结构体变量赋值。注意：赋值时要注意和结构体保持一致
    stu = {name: "张三",age:11,gender:"男"};
    //cout << stu << endl; // 这样报错，结构体变量是一个整体的包装，无法直接cout输出。需要访问每一个成员输出
    cout << stu.name << stu.age << stu.gender << endl;



    return 0;



}


