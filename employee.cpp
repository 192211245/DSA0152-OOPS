#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    int id;
    double salary;
public:
    Employee(const string& nm, int d, double sal) : name(nm), id(d), salary(sal) {}
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};
class Manager : public Employee {
private:
    string department;
    double bonus;
public:
    Manager(const string& nm, int d, double sal, const string& dept, double b)
        : Employee(nm, d, sal), department(dept), bonus(b) {}

    void displayInfo() const {
        Employee::displayInfo();
        cout << "Department: " << department << endl;
        cout << "Bonus: $" << bonus << endl;
    }
};
class Engineer : public Employee {
private:
    string specialty;
    int hours;
public:
    Engineer(const string& nm, int d, double sal, const string& spec, int hrs)
        : Employee(nm, d, sal), specialty(spec), hours(hrs) {}

    void displayInfo() const {
        Employee::displayInfo();
        cout << "Specialty: " << specialty << endl;
        cout << "Hours: " << hours << " per week" << endl;
    }
};
int main() {
    // Create objects of Manager and Engineer
    Employee* emp1 = new Manager("John Doe", 1001, 80000, "Sales", 5000);
    Employee* emp2 = new Engineer("Jane Smith", 1002, 75000, "Software Development", 40);
    cout << "Manager Information:" << endl;
    emp1->displayInfo();
    cout << endl;
    cout << "Engineer Information:" << endl;
    emp2->displayInfo();
    cout << endl;
    delete emp1;
    delete emp2;
    return 0;
}

