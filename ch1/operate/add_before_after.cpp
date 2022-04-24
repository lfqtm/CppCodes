#include <iostream>

using namespace std;

int main() {

    //前置和后置
    int a1 = 10;
    int b1 = ++a1 * 10;

    int a2 = 10;
    int b2 = a2++ * 10;

    cout << "a1=" << a1 << "===" << "b1=" << b1; //11, 110
    cout << "a2=" << a2 << "===" << "b2=" << b2; //11, 100

    return 0;
}