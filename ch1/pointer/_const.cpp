#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    //1.常量指针:指向可变
    const int * p = &a;
//    *p = 20; //指针指向的值不可变
    p = &b; //指针指向可变

    cout << *p << endl;

    //2.指针常量:值可变
    int * const p1 = &a;
    *p1 = 30;
    cout << *p1 << endl;

    //3.既又
    const int * const p2 = &a;
    cout << *p2 << endl;

    return 0;
}