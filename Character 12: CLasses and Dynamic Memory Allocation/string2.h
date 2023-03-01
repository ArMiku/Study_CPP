//
// Created by QIHANG SUN on 2023/3/1.
//

#ifndef STUDY_CPLUS_STRING2_H
#define STUDY_CPLUS_STRING2_H
#include <iostream>
using std::istream;
using std::ostream;

class String {
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;

public:
    String(const char *s);
    String();
    String(const String &s);
    ~String();
    int length() const { return len; }
    void stringlow();
    void stringup();
    int has(char x);

    String &operator=(const String &s);
    String &operator=(const char *s);
    char &operator[](int i);
    const char &operator[](int i) const;

    String operator+(const String &s) const;
    String operator+(const char *s) const;

    friend bool operator<(const String &s1, const String &s2);
    friend bool operator>(const String &s1, const String &s2);
    friend bool operator==(const String &s1, const String &s2);
    friend ostream &operator<<(ostream &os, const String &st);
    friend istream &operator>>(istream &is, String &st);
    friend String operator+(const char *, const String &);

    static int HowMany();
};
#endif //STUDY_CPLUS_STRING2_H
