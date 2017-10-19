
#ifndef MIDTERM3_BLOB_H
#define MIDTERM3_BLOB_H


class blob {
public:
    blob blob(double area);

    double getArea() const;

    void setArea(double area);

    double area;

    bool operator== (const blob &other);

    void operator+= (blob &other);

private:
};


#endif //MIDTERM3_BLOB_H
