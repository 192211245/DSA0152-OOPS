#include <iostream>
#include <string>
int main() 
{
    
    std::string firstName, lastName;
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;
    std::cout << "Your name in reverse order: " << lastName << " " << firstName << std::endl;
    return 0;
}
