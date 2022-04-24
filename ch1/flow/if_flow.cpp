#include <iostream>

using namespace std;

int main() {

    cout << "请输入你的分数" << endl;
    int score;
    cin >> score;
    cout << "您输入的分数为：" << score << endl;

    if (score >= 600) {
        cout << "上一本" << endl;
    } else if (score >= 500) {
        cout << "上二本" << endl;
    } else if(score > 400) {
        cout << "上三本" << endl;
    } else {
        cout << "复读";
    }

    return 0;
}