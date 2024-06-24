#include<iostream>
using namespace std;
int main(int argc,char**argv)
{
	int num1,num2,gcd;
	cout<<"enter first number:";
	cin>>num1;
	cout<<"enter second number:";
	cin>>num2;
	int i=1;
	while(i<num1&&i<=num2)
	{
		if(num1%i==0&&num2%i==0)
		{
			gcd=i;
		}
		i++;
	}
	cout<<"GCD:"<<gcd;
	return 0;	
}
