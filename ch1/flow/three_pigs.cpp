#include <iostream>
using namespace std;

int main() {

    //������ֻС������
    char arr[3] = {'a', 'b', 'c'};
    int weight[] = {0, 0, 0};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "������С��" << arr[i] << "������:" << endl;
        cin >> weight[i];
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "С��" << arr[i] << "������:" << weight[i] << endl;
    }

    if (weight[0] > weight[1]) {
        if (weight[0] > weight[2]) {
            cout << "a����";
        } else {
            cout << "c����";
        }

    } else {
        if (weight[1] > weight[2]) {
            cout << "b����";
        } else {
            cout << "c����";
        }
    }

    return 0;
}