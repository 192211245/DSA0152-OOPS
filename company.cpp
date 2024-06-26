#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    double salary;
    string dateOfJoining;
public:
    Employee(string n, double s, string doj) {
        name = n;
        salary = s;
        dateOfJoining = doj;
    }
    void display() {
        cout << "Name: " << name << ", Salary: " << salary << ", Date of Joining: " << dateOfJoining << endl;
    }
};
int main() {
    Employee employees[10] = {
        Employee("Alice", 50000, "01-01-2020"),
        Employee("Bob", 55000, "15-03-2019"),
        Employee("Charlie", 60000, "21-06-2018"),
        Employee("David", 65000, "10-10-2017"),
        Employee("Eve", 70000, "25-12-2016"),
        Employee("Frank", 75000, "05-05-2015"),
        Employee("Grace", 80000, "14-07-2014"),
        Employee("Heidi", 85000, "30-09-2013"),
        Employee("Ivan", 90000, "18-11-2012"),
        Employee("Judy", 95000, "07-02-2011")
    };
    for (int i = 0; i < 10; i++) {
        employees[i].display();
    }
    return 0;
}

