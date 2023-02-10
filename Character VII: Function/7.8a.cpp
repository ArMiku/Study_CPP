//
// Created by QIHANG SUN on 2023/2/10.
//
#include <iostream>
using namespace std;

const char * seasons[4] ={"Spring","Summer","Fall","Winter"};

void fill(double pa[]);
void show(double da[]);

int main(){
    double expense[4];
    fill(expense);
    show(expense);
    return 0;
}

void fill(double pa[]){
    for(int i = 0; i < 4; i++){
        cout << "Input the expenses of " << seasons[i] << ": ";
        cin >> pa[i];
    }
}

void show(double da[]){
    double total = 0;
    for(int i = 0; i < 4; i++){
        cout << seasons[i] << ": " << da[i] << endl;
        total += da[i];
    }
    cout << "Total: " << total <<endl;
}