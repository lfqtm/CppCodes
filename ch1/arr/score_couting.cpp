#include <iostream>

using namespace std;

int main() {
    int score[3][3] = {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}
    };

    for (auto & i : score) {
        int sum = 0;
        for (int j : i) {
            cout << j << "\t";
        }
        cout << endl;

    }

    return 0;
}