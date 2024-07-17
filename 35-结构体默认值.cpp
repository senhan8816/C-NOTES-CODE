// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 结构体成员默认值
    // 在设计一个机构体的时候，可以更具需要想成员设置默认值
    // 例如：
    struct Student {
        string name;
        int score = 100; // 这是定义的默认值
    };
    struct Student stu1 = {name: "周杰伦"};
    struct Student stu2 = {name: "坤",score:0};




    return 0;



}


