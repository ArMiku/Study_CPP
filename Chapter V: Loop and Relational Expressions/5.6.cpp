//
// Created by 孙啟航 on 2022/4/7.
//
#include <iostream>

using namespace std;

int main() {
    int sales[3][12] = {0};
    int sale[3] = {0};
    int num = 0;
    string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 12; ++j) {
            cin >> sales[i][j];
            sale[i] += sales[i][j];
        }
        num += sale[i];
    }
    for (int i = 0; i < 3; ++i) {
        cout << "Year " << i + 1 << endl;
        for (int j = 0; j < 12; ++j) {
            cout << "month " << month[j] << ": ";
            cout << sales[i][j] << endl;
        }
        cout << "Year " << i + 1 << " slae: " << sale[i] << endl;
        cout << "---------------------" << endl;
    }
    cout << "All sale: " << num << endl;
    return 0;
}
