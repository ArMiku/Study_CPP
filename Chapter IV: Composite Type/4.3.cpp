//
// Created by 孙啟航 on 2022/3/26.
//
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char first_name[10], last_name[10], name[30];
    memset(first_name, '\0', 10);
    memset(last_name, '\0', 10);
    memset(name, '\0', 30);
    cin >> first_name >> last_name;
    strcpy(name, first_name);
    strcat(name, ", ");
    strcat(name, last_name);
    cout << name << endl;
    return 0;
}