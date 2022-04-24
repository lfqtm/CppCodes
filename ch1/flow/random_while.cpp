#include <iostream>
#include <ctime>
using namespace std;

int main() {

    //随机种子生成随机数
    srand((unsigned int) time(NULL));

    //1、随机数
    int number = rand() % 100 + 1; // 0-99的随机数
    cout << "生成的随机数：" << number << endl;

    cout << "随机数已生成，请输入猜测值：";


    while (true) {
        int val = 0;
        cin >> val;
        if (val > number) {
            cout << "猜测过大" << endl;
        } else if (val < number) {
            cout << "猜测过小" << endl;
        } else {
            cout << "猜对啦！恭喜" << endl;
            break;
        }
    }

    return 0;
}