#include <iostream>
using namespace std;

int main() {
    //两种风格
    //1、c char str[]
    char str[] = "hello world";
    //2、cpp string
    string str2 = "hello new world";

    cout << "str1=" << str << "====" << str2 << endl;

    return 0;
}