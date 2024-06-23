#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main()
{
    list<int> ls = { 10, 20, 30, 40, 50 };

    int n = ls.size();

    if (n == 0)
        cout << "Average of all elements in the list is: "
             << 0 << endl;

    else {
        double sum = accumulate(ls.begin(), ls.end(), 0.0);

        double avg = sum / n;
        cout << "Average of all elements in the list is: "
             << avg << endl;
    }

    return 0;
}
