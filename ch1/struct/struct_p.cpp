#include <iostream>
#include <string>

using namespace std;

/**
 * �ṹ��ָ��
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
    struct Student stu = {"����", 18, dog};

    //ָ��
    struct Student *p = &stu;
    cout << p->age << "===" << p->name << "===" << p->dog.age;

    return 0;
}