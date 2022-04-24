#include <iostream>
#include <string>

using namespace std;

/**
 * 结构体指针
 */
struct dog {
    int age;
};
struct Student {
    string name;
    int age;
    struct dog dog;
};

int main() {
    dog dog = {2};
    struct Student stu = {"张三", 18, dog};

    //指针
    struct Student *p = &stu;
    cout << p->age << "===" << p->name << "===" << p->dog.age;

    return 0;
}