//
// Created by QIHANG SUN on 2023/2/3.
//
#include <iostream>
using namespace std;

int Fill_array(double array[], int n);
void Show_array(const double array[], int n);
void Reverse_array(double array[], int n);

int main(){
    double array[10];
    int n = Fill_array(array, 10);
    Show_array(array, n);
    Reverse_array(array, n);
    Show_array(array, n);
    return 0;

}

int Fill_array(double array[], int n){
    double temp;
    int i;
    for(i = 0; i < n; i++){
        cin >> temp;
        if(!cin){
            cin.clear();
            while(cin.get() != '\n')
                continue;
            break;
        }
        else if(temp < 0)
            break;
        array[i] = temp;
    }
    return i;
}

void Show_array(const double array[], int n){
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double array[], int n){
    int mid = n / 2;
    int l = 1, r = n - 2;
    while(l != mid)
        swap(array[l++], array[r--]);
}