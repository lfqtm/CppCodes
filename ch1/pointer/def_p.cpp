#include <iostream>

using namespace std;

int main() {

    //1、定义指针
    int a = 10;
    //指针： 数据类型 * 指针变量名
    int *p;
    //让指针记录变量a的地址 & 取址符
    p = &a;

    cout << "a的地址为：" << &a << endl;
    cout << "指针p为：" << p << endl;

    //2、使用指针
    // *p 解引用，通过指针记录的地址拿到值数据
    cout << *p << endl;
    *p = 20;
    cout << a << endl;
    cout << *p << endl;

    return 0;
}