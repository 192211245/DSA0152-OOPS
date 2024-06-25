#include<iostream>
#include<unordered_set>
using namespace()
{
	int n;
	cout<<"enter number of different numbers:";
	cin>>n;
	if(n<=0)
	{
		cout<<"number of inputs must be positive:"<<endl;
		return 1;
	}
	unordered_set<int>uniqe_numbers;
	int number,sum=0;
	cout<<"enter"<<n<<"different numbers(0 to 100):"<<endl;
	for (int i = 0; i < n; ++i) {
        cin >> number;
        if (number < 0 || number > 100 || !unique_numbers.insert(number).second)
		{
            cout << "Invalid input." << endl;
            return 1;
        }
        sum += number;
    }
    int provided_sum;
    cout << "Enter the sum of the numbers: ";
    cin >> provided_sum;
    if (sum == provided_sum) {
        cout << "The provided sum is correct." << endl;
    } else {
        cout << "The provided sum is incorrect. The correct sum is " << sum << "." << endl;
    }
    return 0;
}
}
