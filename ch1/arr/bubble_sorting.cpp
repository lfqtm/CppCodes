#include <iostream>

using namespace std;

/**
 * 1.�Ƚ����ڵ�Ԫ�أ������һ���ȵڶ����󣬾ͽ���
 * 2.��ÿһ������Ԫ�أ���ִ��1������ÿ�ζ����ҵ��ϴ�ֵ
 * 3.�ظ�ִ�У�ÿ�αȽϴ���-1�����鳤��-1����֪������Ҫ�Ƚ�
 * @return
 */
int main() {
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    cout << "����ǰ��";
    for (int i : arr) {
        cout << i;
    }

    //����ð������
    //1.������=���鳤��-1
    for (int i = 0; i < 9 - 1; ++i) {
        //2.�ڲ����=���鳤��-������-1
        for (int j = 0; j < 9 - i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "�����";
    for (int i : arr) {
        cout << i;
    }

    system("pause");

    return 0;
}