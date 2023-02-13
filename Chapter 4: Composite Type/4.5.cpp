//
// Created by 孙啟航 on 2022/3/26.
//
#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
    string brand;
    double weight;
    int calorie;

    void display() {
        cout << brand << endl;
        cout << weight << endl;
        cout << calorie << endl;
    }
};

int main() {
    CandyBar snack;
    getline(cin, snack.brand);
    cin >> snack.weight >> snack.calorie;
    snack.display();
    return 0;
}