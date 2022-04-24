#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 3, 2, 5, 4};
    //遍历arr打印输出
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << endl;
    }

    //实现逆置
    /*
     * start
     * end
     * temp = arr[start]
     *
     * if start < end
     * temp = arr[start]
     * arr[start] = arr[end]
     * arr[end] = temp
     *
     * start++
     * end--
     *
     */
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        //下标更新
        start++;
        end--;
    }

    for(int i : arr) {
        cout << i << endl;
    }

    return 0;
}