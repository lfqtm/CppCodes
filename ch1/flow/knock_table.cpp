#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i < 101; ++i) {
        //个位是7
        if (i % 7 == 0 || (i / 10 % 10 == 7) || (i % 10 == 7)) {
            cout << i << "敲桌子" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}