//
// Created by QIHANG SUN on 2023/2/26.
//
#include <iostream>
#include <cctype>
#include <stack>
using namespace std;

struct customer {
    char fullname[35];
    double payment;
};

int main() {
    stack<customer> st;
    char ch;
    int total = 0;
    customer people;
    cout << "Please enter A to add a purchase order,\n" << "P to process a PO,or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        while(cin.get() != '\n') continue;
        if(!isalpha(ch)) continue;
        switch (ch) {
            case 'A':
            case 'a':
                cout << "Enter a PO number to add: ";
                cout << "customer's fullname: ";
                cin.getline(people.fullname,35);
                cout << "customer's payment: ";
                cin >> people.payment;
                cin.get();
                st.push(people);
                break;
            case 'p':
            case 'P':if (st.empty())
                    cout << "stack already empty\n";
                else {
                    total += st.top().payment;
                    cout << "Total: " << total << endl;
                    st.pop();
                }
                break;
        }
        cout << "Please enter A to ass a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}
