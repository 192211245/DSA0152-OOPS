#include <iostream>
#include <cmath> 
using namespace std;
int power(int base, int exponent) {
    return pow(base, exponent);
}
double power(double base, double exponent) 
{
    return pow(base, exponent);
}
int main() 
{
    int base_int = 2;
    int exponent_int = 3;
    cout << "Integer Power: " << power(base_int, exponent_int) << endl;
    double base_double = 2.5;
    double exponent_double = 1.5;
    cout << "Floating-point Power: " << power(base_double, exponent_double) << endl;
    return 0;
}

