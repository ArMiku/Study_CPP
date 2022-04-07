//
// Created by 孙啟航 on 2022/4/7.
//
#include <iostream>

using namespace std;

int main() {
    double Daphne = 100, Cleo = 100;
    int num = 0;
    do {
        Daphne += 10;
        Cleo *= 1.05;
        num++;
    } while (Cleo < Daphne);
    cout << "Year: " << num << endl;
    cout << "Daphne: " << Daphne << endl;
    cout << "Cleo: " << Cleo << endl;
    return 0;
}
