#ifndef CIRCLE
#define CIRCLE

class Circle{
public:
    Circle(double radiusIn);
    double getArea() const;
    bool operator== (const Circle &other);
    Circle operator+ (const Circle &other);
    Circle operator- (const Circle &other);
    //decreases the radius of the current circle by the radius of other, but not below 0, and returns the Circle by value.
    Circle *operator++();
    const Circle *operator++ () const;
    //increases the radius of the current circle by 1 and returns a pointer to the current circle

private:
    double radius;
};
#endif
