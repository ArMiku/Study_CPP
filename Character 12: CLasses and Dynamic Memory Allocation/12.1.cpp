//
// Created by QIHANG SUN on 2023/3/1.
//
#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow() {
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt) {
    std::strncpy(name, nm, 20);
    int len = std::strlen(ho) + 1;
    hobby = new char[len];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow& c) {
    std::strncpy(name, c.name, 20);
    int len;
    len = std::strlen(c.hobby);
    hobby = new char[len];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow& Cow::operator=(const Cow& c) {
    if (this == &c) return *this;  // object assigned to itself
    std::strncpy(name, c.name, 20);
    delete[] hobby;
    int len;
    len = std::strlen(c.hobby);
    hobby = new char[len];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::show() const {
    std::cout << "name: " << name << std::endl;
    std::cout << "hobby: " << hobby << std::endl;
    std::cout << "weight: " << weight << std::endl;
}

int main() {
    Cow c1("xiao", "eating", 100);
    c1.show();
    Cow c2 = c1;
    c2.show();
    Cow c3;
    c3 = c2;
    c3.show();
    return 0;
}