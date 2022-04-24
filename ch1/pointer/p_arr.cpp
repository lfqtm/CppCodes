#include <iostream>

using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int * p = arr; //arr是首地址
    //访问第一个元素
    cout << *p << endl;
    p++;//指针向后偏移四字节
    //访问第二个元素
    cout << *p << endl;

    //指针遍历数组
    int * p2 = arr;
    for (int i = 0; i < 10; ++i) {
        cout << *p2 << "\t";
        p2++;
    }


    return 0;
}