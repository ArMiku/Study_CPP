//
// Created by 孙啟航 on 2022/3/21.
//

#include <iostream>

using namespace std;

const int Degree2Min = 60;
const int Min2Sec = 60;

int main() {
    double degree, min, sec;
    cin >> degree >> min >> sec;
    double result = (sec / Min2Sec + min) / Degree2Min + degree;
    cout << result << endl;
    return 0;
}