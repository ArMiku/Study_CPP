//
// Created by QIHANG SUN on 2023/2/10.
//
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int opplevel;
};
int getinfo(student po[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main() {
    cout << "enter the class size:";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * pt = new student[class_size];
    int actual_size = getinfo(pt, class_size);
    //cout << actual_size;
    for (int i = 0; i < actual_size;  i++) {
        display1(pt[i]);
        display2(&pt[i]);
    }
    display3(pt, actual_size);

    delete []pt;
    cout << "Done!\n";
    return 0;
}

int getinfo(student po[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << "please enter the fullname of student(0 to quit):\n";
        cin.getline(po[i].fullname, SLEN);
        cout << "please enter the hobby of student:\n";
        cin.getline(po[i].hobby, SLEN);
        cout << "please enter the opplevel of student:\n";
        cin >> po[i].opplevel;
        cin.get();
    }return i;
}

void display1(student st) {
    cout << st.fullname << " " << st.hobby << " " << st.opplevel << endl;
}
void display2(const student * ps) {
    cout << ps->fullname << " " << ps->hobby << " " << ps->opplevel << endl;
}

void display3(const student pa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << pa[i].fullname << " " << pa[i].hobby << " " << pa[i].opplevel << endl;
    }
}