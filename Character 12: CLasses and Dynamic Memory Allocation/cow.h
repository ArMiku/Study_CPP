//
// Created by QIHANG SUN on 2023/3/1.
//

#ifndef STUDY_CPLUS_COW_H
#define STUDY_CPLUS_COW_H
class Cow {
private:
    char name[20];
    char * hobby;
    double weight;

public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow & c);
    ~Cow() { delete [] hobby; }
    Cow & operator=(const Cow & c);
    void show() const;
};
#endif //STUDY_CPLUS_COW_H
