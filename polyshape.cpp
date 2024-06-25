#include <iostream>
#include <cmath> 
using namespace std;
class Shape {
public:
    virtual double area() const = 0;  
    virtual double volume() const = 0;  

    virtual ~Shape() {}  
};
class Sphere : public Shape {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}

    double area() const override 
	{
        return 4 * M_PI * radius * radius;
    }

    double volume() const override 
	{
        return (4.0/3.0) * M_PI * radius * radius * radius;
    }
};

// Derived class Cylinder
class Cylinder : public Shape {
private:
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double area() const override 
	{
        return 2 * M_PI * radius * (radius + height);
    }

    double volume() const override 
	{
        return M_PI * radius * radius * height;
    }
};

int main() 
{
    Shape* shape1 = new Sphere(5.0);
    Shape* shape2 = new Cylinder(3.0, 7.0);
    cout << "Sphere area: " << shape1->area() << endl;
    cout << "Sphere volume: " << shape1->volume() << endl;

    cout << "Cylinder area: " << shape2->area() << endl;
    cout << "Cylinder volume: " << shape2->volume() << endl;
    delete shape1;
    delete shape2;

    return 0;
}

