#include <iostream>

using namespace std;

int main() {
    // ��Ӱ����
    int score = 0;
    cout << "���Ե�ǰ��Ӱ��������(0-10): " << endl;
    cin >> score;
    // �ж�������
    switch (score) {
        case 10:
            cout << "�����Ӱ";
            break;
        case 1:
            cout << "����ֱ��";
            break;
        default:
            cout << "�ݲ�����";
            break;
    }

    return 0;
}