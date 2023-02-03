//
// Created by QIHANG SUN on 2023/2/2.
//
#include <iostream>
using namespace std;

double CalAverage(double x, double y);

int main(){
    int x, y;
    while(cin >> x >> y){
        if(x && y)
            cout << CalAverage(x, y) <<endl;
        else    break;
    }
    return 0;
}

double CalAverage(double x, double y){
    return 2 * x * y / (x + y);
}