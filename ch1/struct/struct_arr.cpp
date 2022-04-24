#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
};

int main() {

    struct Student stuArr[2] = {
            {"张三", 18},
            {"李四", 28},
    };

    for (int i = 0; i < 3; ++i) {
        cout << stuArr[i].name << "===" << stuArr[i].age << endl;
    }

    return 0;
}