//
// Created by QIHANG SUN on 2023/2/11.
//
#include <iostream>

using namespace std;

void PrintString(const char *str);

void PrintString(const char *str, int times);

int main() {
    char *str = "Hello World";
    PrintString(str);
    cout << "------------" << endl;
    PrintString(str, 2);
    return 0;
}

void PrintString(const char *str) {
    cout << str << endl;
}

void PrintString(const char *str, int times) {
    if (times == 0) {
        cout << str << endl;
    } else {
        times--;
        cout << str << endl;
        PrintString(str, times);
    }
}