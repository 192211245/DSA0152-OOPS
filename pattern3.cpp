#include<iostream>
using namespace std;
class pattern
{
	int i,j;
	string a;
	public:
	void rt(int rows,string a)
	{
		for(i=0;i<rows;i++)
		{
			for(j=0;j<=i;j++)
			{
				cout<<a[j];
			}
			cout<<"\n";
		}
	}	
};
int main()
{
	string a="fathima";
	int rows=a.length();
	pattern v;
	v.rt(rows,a);
}
