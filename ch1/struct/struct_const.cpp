#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
};

void printStudent(struct Student s) {
    cout << s.name << "===" << s.age;
}

//�������ṹ���βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ḵ�Ƴ��µĸ���
//const���Σ���ֹ�����
void printStudent_p(const struct Student * s) {
    // s->age = 150; �����
    cout << s->name << "===" << s->age;
}

int main() {

    struct Student s = {"����", 16};

    printStudent(s);
    printStudent_p(&s);

    return 0;
}