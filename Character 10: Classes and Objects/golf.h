//
// Created by QIHANG SUN on 2023/2/25.
//

#ifndef STUDY_CPLUS_GOLF_H
#define STUDY_CPLUS_GOLF_H
class golf {
private:
    enum {Len = 40};
    char fullname[Len];
    int handicap;
public:
    golf(const char* name, int hc);
    int setgolf();
    void SetHandicap(int hc);
    void showgolf() const;
};
#endif //STUDY_CPLUS_GOLF_H
