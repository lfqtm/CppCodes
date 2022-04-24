#include <iostream>
using namespace std;

int main() {

    //输入三只小猪体重
    char arr[3] = {'a', 'b', 'c'};
    int weight[] = {0, 0, 0};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "请输入小猪" << arr[i] << "的体重:" << endl;
        cin >> weight[i];
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "小猪" << arr[i] << "的体重:" << weight[i] << endl;
    }

    if (weight[0] > weight[1]) {
        if (weight[0] > weight[2]) {
            cout << "a最重";
        } else {
            cout << "c最重";
        }

    } else {
        if (weight[1] > weight[2]) {
            cout << "b最重";
        } else {
            cout << "c最重";
        }
    }

    return 0;
}