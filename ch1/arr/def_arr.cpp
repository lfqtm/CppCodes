#include <iostream>

using namespace std;

int main() {
    //数组
    int arr1[3];
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;

    arr1[3] = 40; //不报错

    int arr2[3] = {1, 2, 3};
    int arr3[] = {3, 2, 1};

    //cout << arr1[3] << "===" << arr2[3] << "===" << arr3 << endl;

    //数组长度
    int length = sizeof(arr1) / sizeof(arr1[0]);
    cout << length << endl;

    cout << arr2 << endl;
    //首数据地址
    cout <<  &arr2[0] << endl;
    cout <<  &arr2[1] << endl;



    return 0;
}