#include <iostream>
#include <cmath> 
using namespace std;
int absolute(int num) {
    return abs(num);
}
double absolute(double num) {
    return fabs(num);
}
int main() 
{
    int num_int = -5;
    cout << "Absolute value of integer: " << absolute(num_int) << endl;
    double num_double = -5.5;
    cout << "Absolute value of floating-point number: " << absolute(num_double) << endl;
    return 0;
}

