#include <iostream>
using namespace std;

#define fansXX(a, b, c) ((a)*(a)*(a)) + ((b)*(b)*(b)) + ((c)*(c)*(c));
int main() {
    /**
     * 水仙花数：个位数^3+十位数^3+百位数^3=本身
     *
     * 个位数 153 % 10 = 3
     * 十位数 153 / 10 = 15 % 10 = 5
     * 百位数 153 / 100 = 1
     */

    int num = 100;
    do{
        int a = 0;
        int b = 0;
        int c = 0;

        a = num % 10;
        b = num / 10 %10;
        c = num / 100;

        int count = fansXX(a,b,c);
        if(count == num){
            cout << num << endl;
        }


        num++;
    } while (num < 1000);



    return 0;
}