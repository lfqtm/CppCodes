#include <iostream>

using namespace std;

/**
 * 1.比较相邻的元素，如果第一个比第二个大，就交换
 * 2.对每一对相邻元素，都执行1的任务，每次都能找到较大值
 * 3.重复执行，每次比较次数-1（数组长度-1），知道不需要比较
 * @return
 */
int main() {
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    cout << "排序前：";
    for (int i : arr) {
        cout << i;
    }

    //开启冒泡排序
    //1.外层次数=数组长度-1
    for (int i = 0; i < 9 - 1; ++i) {
        //2.内层次数=数组长度-外层次数-1
        for (int j = 0; j < 9 - i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "排序后：";
    for (int i : arr) {
        cout << i;
    }

    system("pause");

    return 0;
}