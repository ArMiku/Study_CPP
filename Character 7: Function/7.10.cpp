//
// Created by QIHANG SUN on 2023/2/10.
//
#include <iostream>
using namespace std;

double calculate(double x, double y, double (*pf)(double a, double b));
double add(double x, double y);
double multiple(double x, double y){
    return x * y;
}

int main(){
    int a,b;
    while(cin >> a >> b){
        cout << "Add a and b is " << calculate(a, b, add) << endl;
        cout << "Multiple a and b is " << calculate(a, b, multiple) << endl;
    }
    return 0;
}

double calculate(double x, double y, double (*pf)(double, double)){
    return (*pf)(x,y);
}

double add(double x, double y){
    return x + y;
}