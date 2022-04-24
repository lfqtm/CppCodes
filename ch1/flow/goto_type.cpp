#include <iostream>

using namespace std;

int main() {

    cout << "第一行";
    cout << "第二行";
    goto FLAG;

    cout << "第三行";
    cout << "第四行";
    FLAG:
    cout << "第无行";

    return 0;
}