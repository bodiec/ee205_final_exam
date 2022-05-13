using namespace std;
#include <iostream>

class Shape{
    ///public method
public:
    double compute_area();
    ///virtual method

    ///abstract method
};

class Rectangle : public Shape {
public:
    ///constructor//////////////////////////////////////
    void makeRec(double newLength, double newWidth);

    ///getters////////////////////////////////////////
    ///get length
    double getLength();
    ///get width
    double getWidth();

protected:
    double length;
    double width;
};

class Square : public Rectangle{
public:
    ///constructors
    double makeSquare(double newSide);

    ///getters
    double getSide();
};