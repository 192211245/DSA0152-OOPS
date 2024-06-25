#include <iostream>
using namespace std;
class Animal {
public:
    virtual void eat() 
	{
        cout << "Animal is eating" << endl;
    }

    virtual ~Animal() {}  
};
class Herbivore : public Animal {
public:
    void eat() override
    {
        cout << "Herbivore is eating plants" << endl;
    }
};
class Carnivore : public Animal {
public:
    void eat() override
	{
        cout << "Carnivore is eating meat" << endl;
    }
};

int main()
{
    Animal* animal1 = new Herbivore();
    Animal* animal2 = new Carnivore();
    animal1->eat();
    animal2->eat();
    delete animal1;
    delete animal2;

    return 0;
}

