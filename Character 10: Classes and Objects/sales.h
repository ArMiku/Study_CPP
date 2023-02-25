//
// Created by QIHANG SUN on 2023/2/25.
//

#ifndef STUDY_CPLUS_SALES_H
#define STUDY_CPLUS_SALES_H

namespace SALES
{
    const int QUARTERS = 4;
    class Sales{
    private:
        double sales[QUARTERS];
        double average_;
        double max_;
        double min_;
    public:
        Sales();
        Sales(const double ar[], int n);
        void showSales() const;
    };
}
#endif //STUDY_CPLUS_SALES_H
