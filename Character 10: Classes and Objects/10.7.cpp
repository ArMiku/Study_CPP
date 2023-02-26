//
// Created by QIHANG SUN on 2023/2/26.
//
#include <iostream>
#include <string>

class Plorg {
private:
    std::string name;
    int CI;
public:
    Plorg(std::string na = "Plorga", int ci = 50) : name(na), CI(ci) {}

    void SetPlorg(int ci);

    void ShowPlorg() const;
};

void Plorg::SetPlorg(int ci) {
    CI = ci;
}

void Plorg::ShowPlorg() const {
    using std::cout;
    using std::endl;

    cout << "name: " << name << endl;
    cout << "CI: " << CI << endl;
}

int main() {
    Plorg pl;
    pl.ShowPlorg();
    pl.SetPlorg(49);
    Plorg pp("abc", 23);
    pp.ShowPlorg();
    return 0;
}
