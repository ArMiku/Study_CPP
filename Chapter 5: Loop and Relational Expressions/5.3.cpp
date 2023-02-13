//
// Created by 孙啟航 on 2022/4/7.
//
#include <iostream>

using namespace std;

int main() {
    int input, result = 0;
    while (cin >> input) {
        if (input == 0) break;
        result += input;
        cout << result << endl;
    }
    return 0;
}
