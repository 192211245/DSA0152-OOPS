#include <iostream>

void printFlag() 
{
    const int rows = 15;
    const int cols = 46;

    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j)
		 {
            if (i < 9 && j < 12) 
			{ 
                if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) 
				{
                    std::cout << "*";
                } 
				else 
				{
                    std::cout << " ";
                }
            } 
			else 
			{ 
                if (i % 2 == 0) 
				{
                    std::cout << "=";
                }
				else
				{
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    printFlag();
    return 0;
}
