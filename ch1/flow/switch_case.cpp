#include <iostream>

using namespace std;

int main() {
    // 电影评分
    int score = 0;
    cout << "您对当前电影的评分是(0-10): " << endl;
    cin >> score;
    // 判断输出结果
    switch (score) {
        case 10:
            cout << "经典电影";
            break;
        case 1:
            cout << "不忍直视";
            break;
        default:
            cout << "暂不评分";
            break;
    }

    return 0;
}