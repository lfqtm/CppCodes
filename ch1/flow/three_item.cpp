#include <iostream>

using namespace std;

int main() {

    int arr[] = {2,3,1};

    int temp = (arr[0] > arr[1] ? arr[0] : arr[1]) > arr[2] ? (arr[0] > arr[1] ? arr[0] : arr[1]) : arr[2];
    cout << temp << endl;

    return 0;
}