//
// Created by QIHANG SUN on 2023/2/22.
//
#include <iostream>
#include <string>

using namespace std;

void strcount(const string str);

int main()
{
    string str;

    cout << "Enter a line:\n";
    getline(cin, str);
    while(str.empty())
    {
        strcount(str);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, str);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string str)
{
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    count = str.size();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
