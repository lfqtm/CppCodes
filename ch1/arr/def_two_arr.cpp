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

    cout << "������" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    cout << "�׵�ַ��" << arr << endl;
    cout << "��һ�е�ַ��" << arr[0] << endl;
    cout << "��һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;
    return 0;
}