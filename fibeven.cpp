#include <iostream>
using namespace std;
void printEvenFibonacci(int n) {
    long long first = 0, second = 1, next;
    
    cout << "Even Fibonacci numbers up to " << n << ":" << endl;
    while (true) {
        next = first + second;
        first = second;
        second = next;
        
        if (next > n)
            break;
        
        if (next % 2 == 0) {
            cout << next << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the limit for Fibonacci series: ";
    cin >> n;

    printEvenFibonacci(n);

    return 0;
}
