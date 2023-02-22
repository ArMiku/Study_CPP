//
// Created by QIHANG SUN on 2023/2/22.
//
#include <iostream>
#include <string>
#include <new>

using namespace std;

struct chaff {
    char dross[20];
    int slag;
};

const int CharSize = 500;
char buffer[CharSize];

int main() {
    chaff cha[2];
    chaff *pt;
    pt = new(buffer) chaff[2];
    char dr[20];
    cout << "#1:dross: ";
    cin.getline(dr, 20);
    strcpy(pt[0].dross, dr);
    cout << "#1:slag: ";
    cin >> pt[0].slag;
    cin.get();
    cout << "#2:dross: ";
    cin.getline(dr, 20);
    strcpy(pt[1].dross, dr);
    cout << "#2:slag: ";
    cin >> pt[1].slag;
    cin.get();
    for (int i = 0; i != 2; i++) {
        cout << "#" << i + 1 << ": ";
        cout << pt[i].dross << " ";
        cout << pt[i].slag << endl;
    }
    return 0;
}

