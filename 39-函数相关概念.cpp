// 预处理指令
#include <iostream>
using namespace std;

// 函数

// 1. 定义函数语法：
// 返回值类型 函数名(参数列表) {
//     函数体
//     ...
//     返回值
// }

// 注意： 不能在入口函数中定义函数

// 示例： 判断两个数字的大小，并返回较大值
// int maxNum(int x, int y) {
//     return x > y ? x : y;
// };

// 2. 无返回值函数和void（空）类型
// 函数可以不写返回值
// void 函数名(){}

// 3. 空参函数
// 函数可以不写参数

// 4. 函数嵌套调用
// 一个函数中可以调用其他函数

// 5. 函数参数的值传递和地址传递
int a = 1, b = 2;
// 值传递示例：交换两个变量的值 （外部变量的值没有真的交换）
void switchNum (int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << x << y << endl;
}
// 地址传递示例：交换两个变量的值(外部变量的值真的交换了)
void switchPoint (int * x, int * y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << *x << *y << endl;
}

// 6. 函数传入数组
// 由于数组对象本身只是第一个元素的地址，所以数组传参不区分值传递还是地址传递
// void func1(int a[]){}
// void func1(int a[10]){}
// void func1(int *a){}
// 以上三者都是一样的
// 注意：函数体内，sizeof无法统计数组大小，得到的总是8字节。因为函数中接收到的是指针。还有就是函数接收数组，建议附带数组长度（避免后续写代码忘记）
// 例如： void func(int arr[],int length){} length就是数组的长度


// 7. 练习案例： 定义函数给数组排序
int arr[] = {6,7,5,8,9,10,8,8};
// 使用冒泡排序进行升序排序
void sort_arr(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(arr[i] > arr[j]) {
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i =0; i<length;i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    // 解决中文乱码问题
    system("chcp 65001");
    // 调用函数，并输出函数的返回值
    // cout << maxNum(5,9) << endl;
    // switchNum(a,b);
    // cout << a << b << endl; // 1 2
    // switchPoint(&a,&b);
    // cout << a << b << endl; // 2 1

    // sort_arr(arr,8);




    return 0;



}


