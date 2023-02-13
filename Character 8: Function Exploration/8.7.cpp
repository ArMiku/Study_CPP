//
// Created by QIHANG SUN on 2023/2/13.
//
#include <iostream>

using namespace std;

template<typename T>
void SumArray(T arr[], int n);

template<typename T>
void SumArray(T *arr[], int n);

struct debts {
    char name[50];
    double amount;
};

int main() {
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe",  1300.0},
            {"Iby Stout", 1800.0}
    };
    double *pd[3];
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << "Showing the sum of Mr. E's things:\n";
    SumArray(things, 6);
    cout << "Showing Mr. E's total debt :\n";
    SumArray(pd, 3);
    return 0;
}

template<typename T>
void SumArray(T arr[], int n) {
    cout << "template A\n";
    T sum = arr[0];
    for (int i = 1; i < n; i++)
        sum += arr[i];
    cout << sum << endl;
}

template<typename T>
void SumArray(T *arr[], int n) {
    cout << "template B\n";
    T sum = *arr[0];
    for (int i = 1; i < n; i++)
        sum += *arr[i];
    cout << sum << endl;
}