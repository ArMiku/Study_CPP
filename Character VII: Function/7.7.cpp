//
// Created by QIHANG SUN on 2023/2/10.
//
#include <iostream>
using namespace std;

double * fill_array(double ar [], int limit);
void show_array(const double ar [], double *p);
void revalue(double r, double ar [], double *p);

int main(){
    double ar[5];
    double *p = fill_array(ar, 5);
    show_array(ar, p);
    revalue(2, ar, p);
    show_array(ar, p);
    return 0;
}

double * fill_array(double ar[], int limit){
    double temp;
    int i;
    for(i = 0; i < limit; i++){
        cin >> temp;
        if(!cin){
            cin.clear();
            while(cin.get() != '\n')
                continue;
            break;
        }
        else if(temp < 0)
            break;
        ar[i] = temp;
    }
    return &ar[i];
}

void show_array(const double ar [], double * p){
    const double * index;
    for(index = ar; index != p; index++){
        cout << *index << endl;
    }
}

void revalue(double r, double ar [], double * p){
    while(ar < p){
        *ar = (*ar) * r;
        ar++;
    }
}