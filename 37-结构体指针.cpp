// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 结构体指针


    // 结构体
    struct Student {
        string name;
        int age;
    };

    // 1. 引入已存在结构体地址
    // 给结构体变量赋值
    struct Student stu = {name: "zs",age:18};
    // 声明结构体指针并赋值
    struct Student *p = &stu;

    // 2. 通过new操作符申请指针空间
    struct Student *p1 = new Student{"ls",20};


    // 通过结构体指针访问结构体成员，要使用的符号是：->
    cout << p->name << endl;
    cout << p1->name << endl;
    delete p1;
    
    return 0;



}


