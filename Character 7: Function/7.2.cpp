//
// Created by QIHANG SUN on 2023/2/2.
//
#include <iostream>
using namespace std;

int InputScore(double score[], int n);
void ShowScore(const double score[], int n);
double CalAverage(const double score[], int n);

int main(){
    double score[10] = {0};
    int n = InputScore(score, 10);
    ShowScore(score, n);
    cout << CalAverage(score, n) << endl;
    return 0;
}

int InputScore(double score[], int n){
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
        score[i] = temp;
    }
    return i;
}

void ShowScore(const double score[], int n){
    for(int i = 0; i < n; i++){
        cout << score[i] << " ";
    }
    cout << endl;
}

double CalAverage(const double score[], int n){
    double sum = 0;
    for(int i = 0; i < n; i++)
        sum += score[i];
    return sum / n;
}