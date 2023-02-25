//
// Created by QIHANG SUN on 2023/2/25.
//

#ifndef STUDY_CPLUS_BANK_ACCOUNT_H
#define STUDY_CPLUS_BANK_ACCOUNT_H
#include <string>

class Account {
private:
    std::string name_;
    std::string account_;
    double deposit_;
public:
    Account() {};
    Account(std::string name, std::string account, double deposit);
    void show() const;
    void deposit(const double& money);
    void withdraw(const double& money);
};

#endif //STUDY_CPLUS_BANK_ACCOUNT_H
