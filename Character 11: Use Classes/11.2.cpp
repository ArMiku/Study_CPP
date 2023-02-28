//
// Created by QIHANG SUN on 2023/2/28.
//
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "Vector.h"

namespace VECTOR {
    using namespace std;
    // compute degrees in one radian
    const double Rad_to_deg = 45.0 / atan(1.0);
    // should be about 57.2957795130823

    // private methods
    // calculates magnitude from x and y
    double Vector::get_mag() const {
        return sqrt(x * x + y * y);
    }

    double Vector::get_ang() const {
        if (x == 0.0 && y == 0.0)
            return 0.0;
        else
            return atan2(y, x);
    }

    // set x from polar coordinate
    double Vector::get_x() {
        return get_mag() * cos(get_ang());
    }

    // set y from polar coordinate
    double Vector::get_y() {
        return get_mag() * sin(get_ang());
    }

    // public methods
    Vector::Vector()             // default constructor
    {
        x = y = 0.0;
        mode = RECT;
    }

    // construct vector from rectangular coordinates if form is r
    // (the default) or else from polar coordinates if form is p
    Vector::Vector(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
        } else if (form == POL) {
            x = n1 * cos(n2);
            y = n1 * sin(n2);
        } else {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    // reset vector from rectangular coordinates if form is
    // RECT (the default) or else from polar coordinates if
    // form is POL
    void Vector::reset(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
        } else if (form == POL) {
            x = n1 * cos(n2);
            y = n1 * sin(n2);
        } else {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector()    // destructor
    {
    }

    void Vector::polar_mode()    // set to polar mode
    {
        mode = POL;
    }

    void Vector::rect_mode()     // set to rectangular mode
    {
        mode = RECT;
    }

    // operator overloading
    // add two Vectors
    Vector Vector::operator+(const Vector &b) const {
        return Vector(x + b.x, y + b.y);
    }

    // subtract Vector b from a
    Vector Vector::operator-(const Vector &b) const {
        return Vector(x - b.x, y - b.y);
    }

    // reverse sign of Vector
    Vector Vector::operator-() const {
        return Vector(-x, -y);
    }

    // multiply vector by n
    Vector Vector::operator*(double n) const {
        return Vector(n * x, n * y);
    }

    // friend methods
    // multiply n by Vector a
    Vector operator*(double n, const Vector &a) {
        return a * n;
    }

    // display rectangular coordinates if mode is RECT,
    // else display polar coordinates if mode is POL
    std::ostream &operator<<(std::ostream &os, const Vector &v) {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL) {
            os << "(m,a) = (" << v.magval() << ", "
               << v.angval() * Rad_to_deg << ")";
        } else
            os << "Vector object mode is invalid";
        return os;
    }

}

int main() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int times;
    unsigned long max, min;
    max = min = 0;

    cout << "Enter Times:";
    if (!(cin >> times)) {
        cout << "Input error !, program ended." << endl;
        return 0;
    }
    cout << "Enter target distance (q to quit): ";
    for (int i = 0; i < times; ++i) {
        cin >> target;
        cout << "Enter step length: ";
        if (!(cin >> dstep)) {
            break;
        }

        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        if (min == 0) {
            min = steps;
        }

        if (steps > max) {
            max = steps;
        } else if (steps < min) {
            min = steps;
        }

        result.reset(0.0, 0.0);
        if (i < times - 1) {
            cout << "Enter target distance (q to quit): ";
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Bye!\n";
    return 0;
}