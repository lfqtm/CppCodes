#include "swap_.h"

//ֵ���ݲ���Ӱ��ʵ��
void swap(int num1, int num2) {
    cout << "����ǰ��num1��" << num1 << "\t num2��" << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "����ǰ��num1��" << num1 << "\t num2��" << num2 << endl;
}

int main() {
    int a = 10;
    int b = 20;
    cout << a << "===" << b << endl;
    swap(a, b);
    cout << a << "===" << b << endl;
    return 0;
}