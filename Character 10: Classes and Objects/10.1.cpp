//
// Created by QIHANG SUN on 2023/2/25.
//
#include <iostream>
#include "bank_account.h"

Account::Account(std::string name, std::string account, double deposit) {
    name_ = name;
    account_ = account;
    deposit_ = deposit;
}

void Account::show() const {
    std::cout << "name: " << name_ << std::endl;
    std::cout << "account: " << account_ << std::endl;
    std::cout << "deposit: " << deposit_ << std::endl;
    std::cout << std::string(20, '+') << std::endl;
}

void Account::deposit(const double& money) {
    if(money > 0)
        deposit_ += money;
    else
        std::cout << "Input Error." << std::endl;
}

void Account::withdraw(const double& money) {
    if(money <= 0) {
        std::cout << "Input Error" << std::endl;
    } else if(money > deposit_) {
        std::cout << "You not have enough deposit." << std::endl;
    } else {
        deposit_ -= money;
    }
}

int main() {
    using namespace std;
    Account person("Andrew", "1234567", 100);
    person.show();
    person.deposit(199.1);
    person.show();
    person.withdraw(100);
    person.show();
    return 0;
}