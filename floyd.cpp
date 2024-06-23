#include<iostream>
class FloydTriangle
{
	public:
		FloydTriangle(int rows)
	{
		int number=1;
		for(int i=1;i<=rows;++i)
		{
		 for(j=1;j<=i;++j)
		 {
		 	std::cout<<number<<"";
		    ++number;
	     }
	     std::cout<<std::endl;
		}
	}
    ~FloydTriangle()
	{
		std::cout<<"\nDestructor called";
	}	
};
int main()
{
	int numRows;
	std::cout<<"enter the number of rows for Floyd's Triangle:";
	std::cin>>numRows;
	FloydTriangle(numRows);
	return 0;
}
