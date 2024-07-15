// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 循环语句
    // while循环
    /*
     * while(condition){
     *    code;
     * }
     */

    // do while 循环
    // 先执行一次代码，再判断，所以至少执行一次循环体中的代码
    /*
     * do {
     *   code;
     * }while(condition)
     */

    // for循环
    /*
     * for(int i = 0; i <= 9; i++){
     *    code;
     * }
     * 或
     * int i = 0
     * for(; i <= 9; i++){
     *    code;
     * }
     * 或 （但是这样就死循环了）
     *
     * for(int i = 0; i <= 9;){
     *    code;
     * }
     * 或 （但是这样就死循环了）
     *
     * for(;;){
     *    code;
     * }
     *
     */

     // 注意：所有循环体都可以混合嵌套

    // 99乘法表
    int num = 1;
    while(num <= 9) {
        int innerNum = 1;
        while(innerNum <= num) {
           cout << innerNum << '*' << num << '=' << innerNum * num << '\t';
            innerNum++;
        }
        cout << endl;
        num++;
    }

    for(;;) {
        cout << 1<< endl;

    }
    return 0;
}


