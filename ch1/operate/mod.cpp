#include <iostream>

using namespace std;

int main() {

    int a = 10;
    int b = 3;

    cout << a % b << endl;
    cout << b % a << endl;

    //除数不能为0
    //小数不可取模

    //递增递减
    cout << a++ << endl;
    cout << ++a << endl;

    return 0;
}