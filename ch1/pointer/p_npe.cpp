#include <iostream>

using namespace std;

int main() {
    //空指针指向内存编号为0的内存
    int * p = nullptr;
    //空指针是不可就行访问的
    //内存编号 0—255为系统占用内存，不允许用户访问
    *p = 100;

    cout << *p << endl;
    return 0;
}