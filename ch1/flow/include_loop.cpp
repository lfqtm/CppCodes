#include <iostream>

using namespace std;

/**
 * 嵌套循环
 */
int main() {

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}