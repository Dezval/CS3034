#include <iostream>
#include <math.h>
#include "circle.h"

using namespace std;

Circle::Circle(double radiusIn) :radius(radiusIn) {}
double Circle::getArea() const{return M_PI *          pow(radius,2);}
bool Circle::operator== (const Circle &other) {
    cout << "called " << endl;
    if(abs(other.radius - radius) < 0.0001)	return   true;
    else return false;
}

Circle Circle::operator+(const Circle &other){
    double combinedArea = M_PI * pow(radius, 2) +   	other.getArea();
    double newRadius = sqrt(combinedArea/M_PI);
    return Circle(newRadius);
}

Circle Circle::operator- (const Circle &other) {
    //decreases the radius of the current circle by the radius of other, but not below 0, and returns the Circle by value.

    this->radius -= other.radius;
    if(this->radius < 0){
        this->radius = 0;
    }
    return *this;
}
Circle* Circle::operator++() {
//    increases the radius of the current circle by 1 and returns a pointer to the current circle
    this->radius += 1;
    return this;
}

const Circle *operator++ () const{
};