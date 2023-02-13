//
// Created by 孙啟航 on 2022/4/7.
//
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<long double, 105> ar = {1, 1};
    for(int i=1;i<=100;++i){
        ar[i]=i*ar[i-1];
    }
    cout<<ar[100]<<endl;
    return 0;
}