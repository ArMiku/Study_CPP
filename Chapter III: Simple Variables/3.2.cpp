//
// Created by 孙啟航 on 2022/3/21.
//
#include <iostream>
#include <cmath>
using namespace std;

const int feet2inch = 12;
const double inch2m = 0.0254;
const double kg2pound = 2.2;

int main() {
    int feet = 0;
    double inch = 0, pound = 0;
    cin >> feet >> inch >> pound;
    double kg = pound / kg2pound,
            height = (feet * feet2inch + inch) * inch2m;
    cout << kg / sqrt(height) << endl;
    return 0;
}