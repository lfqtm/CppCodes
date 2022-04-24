#include <iostream>

using namespace std;

int main() {

    int arr[2][3] = {{1,1,3},{2,2,4}};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << endl;
        }
    }

    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr[0][0]) << endl;

    cout << "行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    cout << "首地址：" << arr << endl;
    cout << "第一行地址：" << arr[0] << endl;
    cout << "第一个元素地址：" << &arr[0][0] << endl;
    return 0;
}