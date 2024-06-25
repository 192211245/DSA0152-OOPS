#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
public:
    virtual double area() const = 0;       // Pure virtual function for area
    virtual double perimeter() const = 0;  // Pure virtual function for perimeter
    virtual ~Shape() {}                    // Virtual destructor
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

// Derived class Rectangle
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

// Derived class Triangle
class Triangle : public Shape {
private:
    double a, b, c;  // Sides of the triangle
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double area() const override {
        // Using Heron's formula
        double s = (a + b + c) / 2;  // Semi-perimeter
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() const override {
        return a + b + c;
    }
};

int main() {
    Shape* shapes[3];
    
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(3.0, 4.0, 5.0);

    for (int i = 0; i < 3; ++i) {
        cout << "Shape " << i + 1 << ":\n";
        cout << "Area: " << shapes[i]->area() << "\n";
        cout << "Perimeter: " << shapes[i]->perimeter() << "\n\n";
    }

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}

