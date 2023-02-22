//
// Created by QIHANG SUN on 2023/2/22.
//
#include "9.1-1.cpp"
const int AnnSize = 5;

int main() {
    golf Ann[AnnSize];
    int i = 0, Len = 0;
    std::cout << "#" << i + 1 << ": ";
    Len = setgolf(Ann[i++]);
    while (i != AnnSize && Len != 0) {
        std::cout << "#" << i + 1 << ": ";
        Len = setgolf(Ann[i++]);
    }
    for (int num = 0; num != i; num++) {
        showgolf(Ann[num]);
    }
    return 0;
}
