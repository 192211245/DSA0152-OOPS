#include<iostream>
#include<cmath>
int main()
{
	int number;
	std::cout<<"enter a number:";
	std::cin>>number;
	double cuberoot=cbrt(number);
	std::cout<<"cube root of:"<<number<<"is:"<<cuberoot<<std::endl;
	return 0;
}
