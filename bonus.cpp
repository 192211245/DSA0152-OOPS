#include <iostream>
using namespace std;
int main() {
    char grade;
    double salary, bonus = 0.0, totalSalary;
    cout << "Enter the grade of the employee (A/B): ";
    cin >> grade;
    cout << "Enter the employee salary: ";
    cin >> salary;
    if (grade == 'A' || grade == 'a') {
        bonus = 0.05 * salary; 
    } else if (grade == 'B' || grade == 'b') {
        bonus = 0.10 * salary; 
    } else {
        cout << "Invalid grade entered." << endl;
        return 1; 
    }
    if (salary < 10000) {
        bonus += 0.02 * salary; 
    }

    totalSalary = salary + bonus;
    cout << "Salary=" << salary << endl;
    cout << "Bonus=" << bonus << endl;
    cout << "Total to be paid: " << totalSalary << endl;
    return 0;
}

