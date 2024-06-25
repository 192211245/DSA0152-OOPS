#include <iostream>
#include <cmath>  
using namespace std;
class Shape {
public:
    virtual double area() const = 0;        
    virtual double perimeter() const = 0;   

    virtual ~Shape() {}  
};
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};
class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double area() const override 
	{
        double s = (side1 + side2 + side3) / 2;  
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));  
    }

    double perimeter() const override 
	{
        return side1 + side2 + side3;
    }
};

int main() 
{
    Shape* shape1 = new Rectangle(5.0, 3.0);
    Shape* shape2 = new Triangle(3.0, 4.0, 5.0);
    cout << "Rectangle area: " << shape1->area() << endl;
    cout << "Rectangle perimeter: " << shape1->perimeter() << endl;

    cout << "Triangle area: " << shape2->area() << endl;
    cout << "Triangle perimeter: " << shape2->perimeter() << endl;
    delete shape1;
    delete shape2;

    return 0;
}

