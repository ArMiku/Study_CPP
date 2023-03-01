//
// Created by QIHANG SUN on 2023/3/1.
//
#include "string2.h"
#include <cstring>
#include <iostream>

// initialize static members
int String::num_strings = 0;

int String::HowMany() { return num_strings; }

String::String(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String() {
    len = 1;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String &s) {
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    num_strings++;
}

String::~String() {
    --num_strings;
    delete[] str;
}

void String::stringlow() {
    for (int i = 0; i < len; ++i) {
        if (std::isupper(str[1])) str[i] = std::tolower(str[i]);
    }
}

void String::stringup() {
    for (int i = 0; i < len; ++i)
        if (std::islower(str[i])) str[i] = std::toupper(str[i]);
}

int String::has(char x) {
    int count = 0;
    for (int i = 0; i < len; ++i) {
        if (str[i] == x) count++;
    }
    return count;
}

String &String::operator=(const String &s) {
    if (this == &s) return *this;
    delete[] str;
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    return *this;
}

String &String::operator=(const char *s) {
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char &String::operator[](int i) { return str[i]; }

const char &String::operator[](int i) const { return str[i]; }

String String::operator+(const String &s) const {
    int total_len = len + s.len;
    char *tmp = new char[total_len + 1];
    std::strcpy(tmp, str);
    std::strcat(tmp, s.str);
    String str_new = tmp;
    delete[] tmp;
    return str_new;
}

String String::operator+(const char *s) const {
    String tmp = s;
    String sum = *this + tmp;
    return sum;
}

bool operator<(const String &s1, const String &s2) {
    return (std::strcmp(s1.str, s2.str) < 0);
}

bool operator>(const String &s1, const String &s2) {
    return (std::strcmp(s1.str, s2.str) > 0);
}

bool operator==(const String &s1, const String &s2) {
    //比较相等的时候不考虑大小写，使用strcasecmp(linux)/stricmp(windows)
    return (strcasecmp(s1.str, s2.str) == 0);
}

ostream &operator<<(ostream &os, const String &st) {
    os << st.str;
    return os;
}

istream &operator>>(istream &is, String &st) {
    char tmp[String::CINLIM];
    is.get(tmp, String::CINLIM);
    if (is) st = tmp;
    while (is && is.get() != '\n') continue;
    return is;
}

String operator+(const char *s1, const String &s2) {
    return String(s1) + s2;
}

int main() {
    using namespace std;
    String s1(" and I am a C++ student.");
    String s2 = "Please enter your name: ";
    String s3;
    cout << s2; // overloaded << operator
    cin >> s3; // overloaded >> operator
    s2 = "My name is " + s3; // overloaded =, + operators
    cout << s2 << ".\n";
    s2 = s2 + s1;
    s2.stringup(); // converts string to uppercase
    cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
         << " 'A' characters in it.\n";
    s1 = "red"; // String(const char *),
    // then String & operator=(const String&)
    String rgb[3] = { String(s1), String("green"), String("blue")};
    cout << "Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while (cin >> ans)
    {
        ans.stringlow(); // converts string to lowercase
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb[i]) // overloaded == operator
            {
                cout << "That's right!\n";
                success = true;
                break;
            }
        }
        if (success)
            break;
        else
            cout << "Try again!\n";
    }
    cout << "Bye\n";
    return 0;
}