#include <iostream>
using namespace std;
//函数声明
int max(int a, int b);

int main() {

    int a = 10;
    int b = 20;

    int result = max(a, b);
    cout << result << endl;
    return 0;
}

//可以写在mian函数后面
int max(int a, int b) {
    return a > b ? a : b;
}