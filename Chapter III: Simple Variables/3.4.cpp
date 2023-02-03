//
// Created by 孙啟航 on 2022/3/21.
//
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    long long index;
    cin >> index;
    int sec = index % 60;
    int min = (index / 60) % 60;
    int hour = (index / 3600) % 24;
    int day = index / 3600 / 24;
    printf("%d %d %d %d\n", day, hour, min, sec);
    return 0;
}
