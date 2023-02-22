//
// Created by QIHANG SUN on 2023/2/22.
//

#ifndef STUDY_CPLUS_SALES_H
#define STUDY_CPLUS_SALES_H

namespace SALES
{
    const int QUARTERS = 4;
    struct Sales{
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    //copies the lesser of 4 or n items from the array ar
    // to the sales member of s and computes and stores the
    // average, maximum, and minimum values of the enteres items;
    // remaining elements of sales, if any, set to 0
    void setSales(Sales & s, const double ar[], int n);
    // gathers sales for 4 quarters interactively, stores them
    // in the sales member of s and computes and stores the
    // average, maximum, and minimum values
    void setSales(Sales & s);
    // display all information in structure s
    void showSales(const Sales & s);
}


#endif //STUDY_CPLUS_SALES_H
