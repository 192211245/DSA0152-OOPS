#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,temp;
	cout<<"enter an integer:";
	cin>>num;
	temp=num;

	while(temp>0)
	{
		sum+=temp%10;
		temp/=10;
	}
	if(num%sum==0)
	{
		cout<<num<<"is a harshad number"<<endl;
	}
	else
	{
		cout<<num<<"is not a harshad number"<<endl;
	}
	return 0;
}
