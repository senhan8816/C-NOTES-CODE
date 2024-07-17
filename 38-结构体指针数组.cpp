// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 结构体指针数组


    // 结构体
    struct Student {
        string name;
        int age = 18;
    };

    // 1. 引入已存在结构体数组地址
    struct Student arr[] = {{name:"zs"},{name:"ls"}};
    struct Student *p = arr;
    // 2. 铜鼓new操作符申请指针数组空间
    cout << p[0].name << endl;

    // 2. 通过new操作符申请指针数组空间
    struct Student *p1 = new Student[2]{{name:"ww"},{name:"zl"}};
    cout << p1[0].name << p1[1].age << endl;
    delete[] p1;



    return 0;



}


