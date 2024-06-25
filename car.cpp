#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
public:
    Car(string model, int year) {
        this->model = model;
        this->year = year;
        cout << "Car " << model << " from year " << year << " is created." << endl;
    }

    ~Car() {
        cout << "Car " << model << " from year " << year << " is destroyed." << endl;
    }

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car("Toyota Camry", 2020);
    car.display();
    return 0;
}

