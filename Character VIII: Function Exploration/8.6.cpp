//
// Created by QIHANG SUN on 2023/2/13.
//
#include <iostream>

using namespace std;

template<typename T>
T maxn(T *ptr, int n) {
    T temp = ptr[0];
    for (int i = 1; i < n; i++) {
        temp = temp > ptr[i] ? temp : ptr[i];
    }
    return temp;
}

template<>
const char *maxn(const char **ptr, int n) {
    const char *p = ptr[0];
    int len = strlen(ptr[0]);
    for (int i = 1; i < n; i++) {
        if (strlen(ptr[i]) > len) {
            len = strlen(ptr[i]);
            p = ptr[i];
        }
    }
    return p;
}

int main() {
    int num[6] = {20, 99, -4, 0, 999, 88};
    double dnum[4] = {-10.05, 9.8, 999.9, -0.98};
    const char *test3[5] = {"first", "second", "third", "the longest fourth", "fifth"};
    cout << "The max of int array is " << maxn(num, 6) << endl;
    cout << "The max of double array is " << maxn(dnum, 4) << endl;
    cout << "The max of string array is \"" << maxn(test3, 5) << "\"" << endl;
    return 0;
}