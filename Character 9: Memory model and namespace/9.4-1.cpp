//
// Created by QIHANG SUN on 2023/2/22.
//
//sales.cpp

#include "sales.h"
#include <iostream>

namespace SALES {
    void setSales(Sales &s, const double ar[], int n) {
        double max = 0, min = 0, sum = 0;
        max = ar[0];
        min = ar[0];
        for (int i = 0; i != n; i++) {
            s.sales[i] = ar[i];
            sum += ar[i];
            if (ar[i] > max)
                max = ar[i];
            if (ar[i] < min)
                min = ar[i];
        }
        s.average = sum / n;
        s.max = max;
        s.min = min;
    }

    void setSales(Sales &s) {
        using std::cout;
        using std::cin;
        using std::endl;

        cout << "请输入不多于" << QUARTERS << "个销售金额" << endl;
        //double sa;
        int i = 0;
        cout << "#1: ";
        cin >> s.sales[i];
        i++;
        while (s.sales[i] >= 0 && i < QUARTERS) {
            cout << "#" << i + 1 << ": ";
            cin >> s.sales[i];
            i++;
        }

        double max = 0, min = 0, sum = 0;
        max = s.sales[0];
        min = s.sales[0];
        for (int n = 0; n != i; n++) {
            sum += s.sales[i];
            if (s.sales[i] > max)
                max = s.sales[i];
            if (s.sales[i] < min)
                min = s.sales[i];
        }
        s.average = sum / i;
        s.max = max;
        s.min = min;
    }

    void showSales(const Sales &s) {
        using std::cout;
        using std::endl;

        cout << "slaes`s array of s" << endl;
        for (int i = 0; i < QUARTERS; i++) {
            cout << s.sales[i] << " ";
        }

        cout << "s.average: " << s.average << endl;
        cout << "s.max: " << s.max << endl;
        cout << "s.min: " << s.min << endl;
    }
}
