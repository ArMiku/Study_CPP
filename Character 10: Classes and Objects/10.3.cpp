//
// Created by QIHANG SUN on 2023/2/25.
//

#include "golf.h"
#include <string>
#include <iostream>

golf::golf(const char* name, int hc) {
    strcpy(fullname, name);
    handicap = hc;
}

int golf::setgolf() {
    std::cout << "Please enter the name: ";
    std::cin.getline(fullname,Len);
    std::cout << "Please enter the handicap：";
    std::cin >> handicap;
    std::cin.get();
    golf g(fullname, handicap);
    *this = g;
    return fullname == " " ? 0 : 1;
}

void golf::SetHandicap(int hc) {
    handicap = hc;
}

void golf::showgolf() const {
    std::cout << "name：" << fullname << std::endl;
    std::cout << "handicap：" << handicap << std::endl;
}

int main() {
    golf g("Alex Tony", 10);
    g.showgolf();
    std::cout << std::endl;
    g.setgolf();
    std::cout << std::endl;
    g.showgolf();
    std::cout << std::endl;
    g.SetHandicap(99);
    g.showgolf();
    return 0;
}