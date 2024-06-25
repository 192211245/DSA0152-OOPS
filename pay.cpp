#include <iostream>
using namespace std;
class Employee {
public:
    virtual double calculatePay() const = 0;  

    virtual ~Employee() {}  
};
class Manager : public Employee {
private:
    double salary;
public:
    Manager(double s) : salary(s) {}
    double calculatePay() const override 
	{
        return salary;
    }
};
class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    double calculatePay() const override 
	{
        return hourlyRate * hoursWorked;
    }
};
int main() 
{
    Employee* emp1 = new Manager(5000.0);
    Employee* emp2 = new Engineer(50.0, 160);
    cout << "Manager's pay: $" << emp1->calculatePay() << endl;
    cout << "Engineer's pay: $" << emp2->calculatePay() << endl;
    delete emp1;
    delete emp2;
    return 0;
}

