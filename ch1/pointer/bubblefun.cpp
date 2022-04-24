#include <iostream>

using namespace std;

void bubbleSort(int * arr, int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int * arr, int len) {
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    //数组
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};

    //封装函数
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, arrLength);
    printArray(arr, arrLength);


    return 0;
}