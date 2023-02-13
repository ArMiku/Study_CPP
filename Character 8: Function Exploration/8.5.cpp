//
// Created by QIHANG SUN on 2023/2/13.
//
#include <iostream>

using namespace std;

template<typename T>
T max5(T *ptr) {
    T temp = ptr[0];
    for (int i = 1; i < 5; i++) {
        temp = temp > ptr[i] ? temp : ptr[i];
    }
    return temp;
}

int main() {
    int num[5] = {20, 99, -4, 0, 999};
    double dnum[5] = {-10.05, 9.8, 999.9, -0.98, 45.1};
    cout << "The max of int array is " << max5(num) << endl;
    cout << "The max of double array is " << max5(dnum) << endl;
    return 0;
}