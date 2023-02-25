//
// Created by QIHANG SUN on 2023/2/25.
//
#include <iostream>
#include "sales.h"

SALES::Sales::Sales(const double *ar, int n) {
    double max = 0, min = 0, sum = 0;
    max = ar[0];
    min = ar[0];
    for (int i = 0; i < n; i++) {
        sales[i] = ar[i];
        sum += ar[i];
        if (ar[i] > max)
            max = ar[i];
        if (ar[i] < min)
            min = ar[i];
    }
    average_ = sum / n;
    max_ = max;
    min_ = min;
}

SALES::Sales::Sales() {
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "请输入不多于" << QUARTERS << "个销售金额" << endl;
    int i = 0;
    std::cout << "#1: ";
    std::cin >> sales[i];
    while (sales[i] >= 0 && i < SALES::QUARTERS)
    {
        i++;
        std::cout << "#" << i + 1 << ": ";
        std::cin >> sales[i];
        if (i == 3)
        {
            if (sales[i] < 0)
                i = i - 1;
            break;
        }
    }
    SALES::Sales sa(sales, i+1);
    *this = sa;
}



void SALES::Sales::showSales() const {
    using namespace std;

    cout << "slaes`s array of s" << endl;
    for (int i = 0; i < QUARTERS; i++) {
        cout << sales[i] << " ";
    }

    cout << "average: " << average_ << endl;
    cout << "max: " << max_ << endl;
    cout << "min: " << min_ << endl;
}

int main() {
    using namespace std;

    cout << "请输入不多于" << SALES::QUARTERS << "个销售金额" << endl;
    double a[4];
    int i = 0;
    cout << "#1: ";
    cin >> a[i];
    while (a[i] >= 0 && i < SALES::QUARTERS)
    {
        i++;
        cout << "#" << i + 1 << ": ";
        cin >> a[i];
        if (i == 3)
        {
            if (a[i] < 0)
                i = i - 1;
            break;
        }
    }
    SALES::Sales s1(a, i + 1);
    s1.showSales();

    SALES::Sales s2;
    s2.showSales();
    return 0;
}