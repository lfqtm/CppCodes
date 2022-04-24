#include <iostream>

using namespace std;

int main() {

    int a = 10;
    int b = 3;
    int c = 6;

    cout << (a + b - 1) / c << endl;

    cout << a / b << endl; //整数相除还是整数，小数不会保留 10 / 3 = 3

//    cout << 10 / 0 << endl;

//    小数可以相除
    double d = 10.0;
    double e = 3.0;
    cout << d / e << endl;
    return 0;
}