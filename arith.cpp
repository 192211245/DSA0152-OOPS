#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter two integer:";
	cin>>num1>>num2;
	cout<<"addition:"<<num1+num2<<endl;
	cout<<"subtraction:"<<num1-num2<<endl;
	cout<<"multiplication:"<<num1*num2<<endl;
	if(num2!=0)
	{
		cout<<"division:"<<num1/num2<<endl;
		cout<<"modulo:"<<num1%num2<<endl;
	}
	else
	{
		cout<<"division and modulo by zero is undefined"<<endl;
	}
	return 0;
}
