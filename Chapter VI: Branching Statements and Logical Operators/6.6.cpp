//
// Created by 孙啟航 on 2022/7/14.
//
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct MemberInfo {
    string name;
    double deposit;

    void display() {
        cout << name << "\t" << deposit << endl;
    }
};

int main() {
    int n;
    bool is_empty;
    string temp_n;
    double temp_d;
    ifstream inFile;
    inFile.open("Chapter VI: Branching Statements and Logical Operators/6_6.txt", ios::in);
    inFile >> n;
    inFile.get();
    vector<MemberInfo> members;
    for (int i = 0; i < n; i++) {
        MemberInfo memberInfo;
        if (inFile.eof()) break;
        getline(inFile, temp_n);
        inFile >> temp_d;
        inFile.get();
        memberInfo.name = temp_n;
        memberInfo.deposit = temp_d;
        members.push_back(memberInfo);
    }
    cout << "----Grand Patrons----" << endl;
    for (vector<MemberInfo>::iterator iter = members.begin(); iter != members.end(); iter++) {
        is_empty = true;
        if (iter->deposit > 10000) {
            is_empty = false;
            iter->display();
        }
        if (is_empty) cout << "none" <<endl;
    }
    cout << "----Patrons----" << endl;
    for (vector<MemberInfo>::iterator iter = members.begin(); iter != members.end(); iter++) {
        is_empty = true;
        if (iter->deposit <= 10000)  {
            is_empty = false;
            iter->display();
        }
        if (is_empty) cout << "none" <<endl;
    }
    inFile.close();
    return 0;
}
