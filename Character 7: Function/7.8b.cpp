//
// Created by QIHANG SUN on 2023/2/10.
//
#include <iostream>
using namespace std;

struct SQH{
    double expense[4];
};

const char * seasons[4] ={"Spring","Summer","Fall","Winter"};

void fill(SQH * sqh1);
void show(SQH sqh2);

int main(){
    SQH sqh;
    fill(&sqh);
    show(sqh);
}

void fill(SQH * sqh1){
    for(int i = 0; i < 4; i++){
        cout << "Input the expenses of " << seasons[i] << ": ";
        cin >> sqh1->expense[i];
    }
}

void show(SQH sqh2){
    double total = 0;
    for(int i = 0; i < 4; i++){
        cout << seasons[i] << ": " << sqh2.expense[i] << endl;
        total += sqh2.expense[i];
    }
    cout << "Total: " << total <<endl;
}