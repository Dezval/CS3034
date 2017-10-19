

#include "blob.h"
blob * blob::blob(double area) {
    this->area = area;
}
double blob::getArea() const {
    return this->area;
}

void blob::setArea(double area) {
    blob::area = area;
}

bool blob::operator==(const blob &other) {
    if(other.getArea() == getArea()){return true;}
    return false;
}

void blob::operator+=(blob &other) {
    this->area += other.getArea();
    other.setArea(0);
}


