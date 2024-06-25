#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,remainder;
	cout<<"/n enter a number:";
	cin>>num;
	cout<<"/n reversed num:";
	while(num!=0)
	{
		remainder=num%10;
		rev=rev*10*remainder;
		num/=10;
	}
	cout<<rev<<end|;
	return 0;
}
