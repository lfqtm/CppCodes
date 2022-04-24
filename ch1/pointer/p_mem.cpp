#include <iostream>

using namespace std;

int main() {

    int a = 10;
    int * p1;
    p1 = &a;
    int *p = &a;

    cout << sizeof(int *) << endl;
    cout << sizeof(p) << endl;

    return 0;
}