#include <iostream>
#include <ctime>
using namespace std;

int main() {

    //����������������
    srand((unsigned int) time(NULL));

    //1�������
    int number = rand() % 100 + 1; // 0-99�������
    cout << "���ɵ��������" << number << endl;

    cout << "����������ɣ�������²�ֵ��";


    while (true) {
        int val = 0;
        cin >> val;
        if (val > number) {
            cout << "�²����" << endl;
        } else if (val < number) {
            cout << "�²��С" << endl;
        } else {
            cout << "�¶�������ϲ" << endl;
            break;
        }
    }

    return 0;
}