#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;
public:
    Employee(const std::string& empName, int empID, double empSalary)
        : name(empName), employeeID(empID), salary(empSalary) {}
    void adjustSalary(char grade) {
        if (grade == 'A') salary *= 1.20;
        else if (grade == 'B') salary *= 1.10;
        else if (grade == 'C') salary *= 1.05;
        else if (grade == 'E') salary *= 0.90;
        else if (grade != 'D') std::cout << "Invalid grade. No change.\n";
    }
    void display() const {
        std::cout << "Name: " << name << ", ID: " << employeeID << ", Salary: $" << salary << "\n";
    }
};

int main() { 
    Employee emp("John Doe", 12345, 50000.0);
    emp.display();
    char grade;
    std::cout << "Enter performance grade (A/B/C/D/E): ";
    std::cin >> grade;
    emp.adjustSalary(grade);
    emp.display();
    return 0;
}

