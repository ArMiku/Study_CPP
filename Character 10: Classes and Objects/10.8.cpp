//
// Created by QIHANG SUN on 2023/2/26.
//
//类方法实现stock00.cpp
#include<iostream>
#include <string>
#include <cctype>
#include "list.h"

using namespace std;

bool List::isempty() const {
    return top == 0;
}

bool List::isfull() const {
    return top == MAX;
}

bool List::add(const Item item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else
        return false;
}

void List::visit(void(*pf)(Item &item)) {
    std::cout << "\nDisplay the item:\n";
    for (int i = 0; i < top; i++)
        (*pf)(items[i]);
}

void func(Item &item);//函数声明

int main() {
    List st;
    string str;
    cout << "At first:" << endl;
    if (st.isempty() == 1)
        str = "Yes!";
    if (st.isempty() == 0)
        str = "No!";
    cout << "isempty? " << str << endl;
    if (st.isfull() == 1)
        str = "Yes!";
    if (st.isfull() == 0)
        str = "No!";
    cout << "isfull? " << str << endl;
    st.add(1);
    st.add(2);
    st.add(3);
    st.add(4);
    cout << "\nNow:" << endl;
    if (st.isempty() == 1)
        str = "Yes!";
    if (st.isempty() == 0)
        str = "No!";
    cout << "isempty? " << str << endl;
    if (st.isfull() == 1)
        str = "Yes!";
    if (st.isfull() == 0)
        str = "No!";
    cout << "isfull? " << str << endl;
    void (*pf)(Item &item);
    pf = func;
    st.visit(pf);
    system("pause"); //显示暂停

    return 0;
}

void func(Item &item) {
    cout << item << endl;
}