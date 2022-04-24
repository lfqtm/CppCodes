#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
};

void printStudent(struct Student s) {
    cout << s.name << "===" << s.age;
}

//将函数结构体形参改为指针，可以减少内存空间，不会复制出新的副本
//const修饰，防止误操作
void printStudent_p(const struct Student * s) {
    // s->age = 150; 误操作
    cout << s->name << "===" << s->age;
}

int main() {

    struct Student s = {"张三", 16};

    printStudent(s);
    printStudent_p(&s);

    return 0;
}