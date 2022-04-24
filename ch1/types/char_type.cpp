#include <iostream>
using namespace std;

int main() {
    //1、创建字符型变量
    char ch = 'a';
    //2、字符所占内存
    cout << ch << endl;
    cout << sizeof(ch) << endl;
    //3、常见错误
//    char ch2 = 'xxx';
//    char ch3 = "b";

    //4、字符变量对应的ascii编码
    cout << (int) ch << endl;


    return 0;
}