//
// Created by QIHANG SUN on 2023/2/3.
//
#include <iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);

int main(){
    cout << probability(47, 5) * probability(27, 1) << endl;
    return 0;
}

long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;
    for (int n = numbers, p = picks; p > 0; n--, p --) {
        result = result * n / p;
    }
    return result;
}