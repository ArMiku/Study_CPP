//
// Created by 孙啟航 on 2022/7/14.
//
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    double ave = 0, sum = 0;
    int count = 0;
    double donations[10];
    for (int i = 0; i < 10; i++) {
        cin >> donations[i];
        if (cin.fail()) {
            cin.clear();
            break;
        }
        sum += donations[i];
    }
    ave = sum / (sizeof(donations) / sizeof(donations[0]));
    for (int i = 0; i < sizeof(donations) / sizeof(donations[0]); i++) {
        if (ave < donations[i])
            count++;
    }
    cout << ave << " " << count << endl;
    return 0;
}
