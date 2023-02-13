//
// Created by QIHANG SUN on 2023/2/3.
//
#include <iostream>
using namespace std;

long long Calculate(int n){
    if(n == 0)
        return 1;
    return n * Calculate(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << Calculate(n) << endl;
    return 0;
}