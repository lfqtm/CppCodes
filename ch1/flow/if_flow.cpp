#include <iostream>

using namespace std;

int main() {

    cout << "��������ķ���" << endl;
    int score;
    cin >> score;
    cout << "������ķ���Ϊ��" << score << endl;

    if (score >= 600) {
        cout << "��һ��" << endl;
    } else if (score >= 500) {
        cout << "�϶���" << endl;
    } else if(score > 400) {
        cout << "������" << endl;
    } else {
        cout << "����";
    }

    return 0;
}