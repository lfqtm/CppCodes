#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    //创建方式1
    struct Student s1;
    s1.age = 20;
    s1.name = "张山";
    s1.score = 100;

    cout << s1.name << "===" << s1.age << "===" << s1.score << endl;

    //创建方式2
    struct Student s2 = {"李四", 19, 100};
    cout << s2.name << "===" << s2.age << "===" << s2.score << endl;

    //创建方式3
    struct Student {
        string name;
        int age;
        int score;
    }s3;

    s3.age = 21;
    s3.name = "王五";
    s3.score = 101;
    cout << s3.name << "===" << s3.age << "===" << s3.score << endl;

    return 0;
}