// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    int arr1[] = {14,15,16};

    // 数组的遍历
    // 可以使用for或while循环常规的遍历数组
    for(int i = 0; i < sizeof(arr1)/sizeof(arr1[0]);i++) {
        cout << i << endl;
    }

    // 也可以使用下面for循环的高级用法：
    // for(元素类型 临时变量名: 数组变量){}
    for(int num: arr1) {
        //数组有几个元素，循环执行几次
        cout << num << endl;
    }


    return 0;
}


