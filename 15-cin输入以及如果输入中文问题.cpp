// 预处理指令
#include <iostream>
using namespace std;
int main() {

    // cin数据输入
    // 通过cout可以将内容打印输出到控制台，通过cin可以接收键盘输入的数据
    int num;
    cout << "input a number, please" << endl;
    // 代码走到这里会暂停，等待键盘输入
    cin >> num; // 将用户键盘输入赋值给变量num
    cout << num << endl;

    // 如果输入中文有可能出现问题，需要修改编辑期的设置。如clion.同时按住ctrol+shift+alt+/,弹出维护窗口，点击注册表，去掉run.processes.with.pty
    string str;
    cout << "input a string,please" << endl;
    cin >> str;
    cout << str << endl;
    return 0;
}


