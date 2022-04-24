#include <iostream>
using namespace std;

int main() {
    float f1 = 3.14f;
    double d1 = 3.14;

    cout << f1 << "===" << d1 << endl;
    cout << sizeof(f1) << "==" << sizeof(d1) << endl;

    //科学计数法
    float f2 = 3e2; // 3 x 10 ^2
    cout << f2 << endl;

    return 0;
}