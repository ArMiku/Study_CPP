//
// Created by QIHANG SUN on 2023/2/13.
//
#include <iostream>

using namespace std;

struct CandyBar {
    char name[50];
    double weight;
    int heat;
};

void SetCandyBar(CandyBar &sample, char *name = "Millennium Munch", double weight = 2.85, int heat = 350);

void ShowCandyBar(const CandyBar &sample);

int main() {
    CandyBar sample;
    char name[50];
    double weight;
    int heat;
    cout << "Input name: ";
    cin.getline(name, 50);
    cout << "Input weight and heat: ";
    cin >> weight >> heat;
    SetCandyBar(sample, name, weight, heat);
    ShowCandyBar(sample);
    return 0;
}

void SetCandyBar(CandyBar &sample, char *name, double weight, int heat) {
    int i = 0;
    while (name[i] && i < 49) {
        sample.name[i] = name[i];
        i++;
    }
    sample.name[i] = '\0';
    sample.weight = weight;
    sample.heat = heat;
}

void ShowCandyBar(const CandyBar &sample) {
    cout << "CandyBar Info: " << endl;
    cout << "name: " << sample.name << endl;
    cout << "weight: " << sample.weight << endl;
    cout << "heat: " << sample.heat << endl;
}