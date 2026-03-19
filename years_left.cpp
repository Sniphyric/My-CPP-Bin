#include <iostream>

int main()
{
    std::cout << "What year is it now? ";
    
    int currentYear{};
    std::cin >> currentYear; // this is going to extract what the user will write.
    
    int yearsLeft{ 2030 - currentYear };
    std::cout << "There is " << yearsLeft << " years left for 2030." << '\n';
    
    std::cin.ignore(1000, '\n');
    std::cout << "Press enter to exit...";
    std::cin.get();
    return 0;
}