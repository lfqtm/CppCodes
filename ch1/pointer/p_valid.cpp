#include <iostream>

using namespace std;

int main() {

    int * p =(int *) 0X1100;
    *p =20;
    cout << *p << endl;

    return 0;
}