//
// Created by 孙啟航 on 2022/3/23.
//
#include <iostream>
#include <string>

using namespace std;

struct people {
    string first_name;
    string last_name;
    char grade;
    int age;

    void display() {
        cout << last_name << ", " << first_name << endl;
        cout << char(grade + 1) << endl;
        cout << age << endl;
    }
};

int main() {
    people p1;
    getline(cin, p1.first_name);
    getline(cin, p1.last_name);
    cin >> p1.grade >> p1.age;
    p1.display();
    return 0;
}
