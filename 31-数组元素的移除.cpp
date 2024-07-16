// 预处理指令
#include <iostream>
using namespace std;
int main() {
    // 解决中文乱码问题
    system("chcp 65001");

    // 数组元素的移除
    // C++内置并未提供对数组元素进行增加（插入），移除的功能。需要手动实现（vector容器提供，后续学习）
    // 移除元素的核心思路：
    // 1. 通过new操作符，申请新数组的内存空间，
    // 2. 遍历旧数组元素，将需要的添加到新数组中
    // 2. 通过delete删除老数组的空间占用


    // 示例：
    // 旧数组，需要去掉里面的7
    // 注意：这里数组不是静态创建的，所以通过sizeof无法拿到正确的数组长度
    int *pArr = new int[5]{1,3,5,7,9};
    // 1.创建一个新的数组
    int *pNewArr = new int[4];
    // 2. 遍历旧数组，将需要的数据，添加到新数组中
    for(int i = 0; i < 5; i++) {
        // 因为要移除的元素7的下标是3，所以当i为3的时候跳过
        if(i == 3) {
            continue;
        }
        if(i < 3) {
            pNewArr[i] = pArr[i];
        }else {
            pNewArr[i-1] = pArr[i];
        }
    }

    // 删除老数组
    delete[] pArr;
    for(int i = 0; i < 4; i++) {
        cout << pNewArr[i] << endl;
    }
    return 0;



}


