//
// Created by QIHANG SUN on 2023/2/13.
//
#include <iostream>

using namespace std;

struct stringy {
    char *str;
    int ct;
};

void set(stringy &beany, char *testing);

void show(const stringy &beany, int n = 1);

void show(const char *testing, int n = 1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done");
    return 0;
}

void set(stringy &beany, char *testing) {
    beany.ct = strlen(testing);
    beany.str = new char[strlen(testing) + 1];
    strcpy(beany.str, testing);
}

void show(const stringy &beany, int n) {
    for (int i = 0; i < n; i++) {
        cout << beany.str << endl;
    }
}

void show(const char *testing, int n) {
    for (int i = 0; i < n; i++) {
        cout << testing << endl;
    }
}
