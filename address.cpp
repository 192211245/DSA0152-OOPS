#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,20,30};
	int*ptr=arr;
	cout<<"displaying address using arrays:\n";
	for(int i=0;i<3;++i)
	{
		cout<<"arr["<<i<<"]="<<&arr[i]<<endl;
	}
	cout<<"\ndisplating address using pointers:\n";
	for(int i =0;i<3;++i)
	{
		cout<<"ptr+"<<i<<"="<<ptr+i<<endl;
	}
	return 0;
}
