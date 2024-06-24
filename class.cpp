#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    string name;
public:
    Student(string n = "") : name(n) {}
    void displayStudentInfo() const {
        cout << "Name: " << name << endl;
    }
};
class Test : virtual public Student {
protected:
    int marks1;
    int marks2;
public:
    Test(string n = "", int m1 = 0, int m2 = 0) : Student(n), marks1(m1), marks2(m2) {}
    void displayTestInfo() const {
        displayStudentInfo();
        cout << "Marks1: " << marks1 << "\nMarks2: " << marks2 << endl;
    }
};
class RollNumber : virtual public Student {
protected:
    int rollNumber;
public:
    RollNumber(string n = "", int rn = 0) : Student(n), rollNumber(rn) {}
    void displayRollNumberInfo() const {
        displayStudentInfo();
        cout << "Roll Number: " << rollNumber << endl;
    }
};
class Result : public Test, public RollNumber {
public:
    Result(string n = "", int rn = 0, int m1 = 0, int m2 = 0)
        : Student(n), Test(n, m1, m2), RollNumber(n, rn) {}
    void displayResult() const {
        displayStudentInfo();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks1: " << marks1 << "\nMarks2: " << marks2 << endl;
        cout << "Total Marks: " << (marks1 + marks2) << endl;
    }
};
int main() {
    Result student("xyz", 77, 89, 91);
    student.displayResult();
    return 0;
}

