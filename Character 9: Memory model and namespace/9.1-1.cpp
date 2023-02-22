//
// Created by QIHANG SUN on 2023/2/22.
//
#include "golf.h"
#include <iostream>
#include <string>
// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf &g, const char *name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf &g) {
    std::cout << "Input name: ";
    std::cin.getline(g.fullname, Len);
    if(g.fullname[0] == '\0')
        return 0;
    std::cout << "Input  rank: ";
    std::cin >> g.handicap;
    std::cin.get();
    return 1;
}

// function resets handicap to new value
void handicap(golf &g, int hc) {
    g.handicap = hc;
}

// function displays contents of golf structure
void showgolf(const golf &g) {
    if(g.fullname[0] != '\0')
        std::cout << g.fullname << ": " << g.handicap << std::endl;
}