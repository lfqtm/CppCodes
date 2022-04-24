#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
};

void printStudent(struct Student s) {
    cout << s.name << "===" << s.age;
}

void printStudent2(struct Student * p) {
    cout << p->name << "===" << p->age;
}

int main() {

    struct Student s = {"张三", 20};
    printStudent(s);

    return 0;
}