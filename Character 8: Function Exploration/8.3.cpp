//
// Created by QIHANG SUN on 2023/2/13.
//
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void L2U(string &str);

int main() {
    string str;
    cout << "Enter a string (q to quit): ";
    while (getline(cin, str)) {
        if (str == "q") break;
        L2U(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
        str = "";
    }
    return 0;
}

void L2U(string &str) {
    int length = str.size();
    for (int i = 0; i < length; i++)
        if (islower(str[i]))
            str[i] = toupper(str[i]);
}