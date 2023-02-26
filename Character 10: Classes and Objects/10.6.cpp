//
// Created by QIHANG SUN on 2023/2/26.
//
#include <iostream>

class Move {
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0); 	// sets x, y to a, b
    void showmove() const;					// shows current x, y values
    Move add(const Move & m) const;
    // this function adds x of m to x of invoking object to get new x,
    // adds y of m to y of invoking object to get new y, creates a new
    // move object initialized to new x, y values and returns it
    void reset(double a = 0, double b = 0);	// resets x,y to a, b
};

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showmove() const {
    using std::cout;
    using std::endl;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

Move Move::add(const Move& m) const {
    Move mv;
    mv.x = m.x + x;
    mv.y = m.y + y;
    return mv;
}

void Move::reset(double a, double b) {
    x = a;
    y = b;
}

int main() {
    Move mv;
    mv.showmove();
    mv.reset(3, 4);
    mv.showmove();
    Move mm, ma(1, 1);
    mm = mv.add(ma);
    mm.showmove();
    return 0;
}