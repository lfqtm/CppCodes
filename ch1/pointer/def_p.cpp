#include <iostream>

using namespace std;

int main() {

    //1������ָ��
    int a = 10;
    //ָ�룺 �������� * ָ�������
    int *p;
    //��ָ���¼����a�ĵ�ַ & ȡַ��
    p = &a;

    cout << "a�ĵ�ַΪ��" << &a << endl;
    cout << "ָ��pΪ��" << p << endl;

    //2��ʹ��ָ��
    // *p �����ã�ͨ��ָ���¼�ĵ�ַ�õ�ֵ����
    cout << *p << endl;
    *p = 20;
    cout << a << endl;
    cout << *p << endl;

    return 0;
}