#include<iostream>
using namespace std;
class Product{
		int product_id;
		char product_name[100];
public:
	void set_p()
	{
		cout<<"enter the product id: ";
		cin>> product_id;
		cout<<"enter the product name: ";
		cin>> product_name;
	}
	void display_p(){
			cout<< endl << "product id "  << product_id << "\ncustomer name :" << product_name << endl;
	}
};
class Price: private Product{
	int product_year;
	int product_price;
public:
	void set_s()
	{
		set_p();
		cout<<"enter the product year: ";
		cin>> product_year;
		cout<<"enter product price: ";
		cin>> product_price;
	}
	void display_s()
	{
		display_p();
		cout<<"year of product :"<< product_year <<"\nprice of product " << product_price << endl;
	}
};
int main()
{
	Price s;
	s.set_s();
	s.display_s();
	return 0;
}
