using namespace std;
#include <iostream>
#include "classes.h"

double Shape::compute_area(){
    double len = double Rectangle::getLength();
    double wid= double Rectangle::getWidth();
    double area = len * wid;
    return area;
}
void Rectangle::makeRec(double newLength, double newWidth) {
    if(length<0){
        throw invalid_argument;
        cout<<"length and width must be greater than 0"<<endl;
    }
    if(width<0){
        throw invalid_argument;
        cout<<"length and width must be greater than 0"<<endl;
    }

    length=newLength;
    width=newWidth;
}

double Rectangle::getWidth() {
    return width;
}
double Rectangle::getLength() {
    return length;
}
double Square::makeSquare(double newSide) {
    Rectangle::makeRec(newSide, newSide);
}
double Square::getSide(){
    return Rectangle::getLength();
}