//
// Created by QIHANG SUN on 2023/2/26.
//

#ifndef STUDY_CPLUS_LIST_H
#define STUDY_CPLUS_LIST_H

typedef int Item;

class List {
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    List() { top = 0; }
    bool isempty() const;
    bool isfull() const;
    bool add(const Item item);
    void visit(void(*pf)(Item &item));
};

#endif //STUDY_CPLUS_LIST_H
