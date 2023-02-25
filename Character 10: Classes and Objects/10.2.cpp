//
// Created by QIHANG SUN on 2023/2/25.
//
#include <iostream>
#include <cstring>
#include "Person.h"

Person::Person(const std::string &ln, const char *fn) {
    lname = ln;
    strcpy(fname, fn);
}

void Person::show() const {
    std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const {
    std::cout << lname << " " << fname << std::endl;
}

int main() {
    using namespace std;
    Person one;                                 // use default constructor
    Person two("Smythecraft");              // use #2 with one default argument
    Person three ("Dimwiddy", "Sam");   // use #2, no defaults
    one.show();
    one.FormalShow();
    cout << "******************" << endl;
    two.show();
    two.FormalShow();
    cout << "******************" << endl;
    three.show();
    three.FormalShow();
    cout << "******************" << endl;
    return 0;
}