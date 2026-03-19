#include <iostream>

int main()
{
    std::cout << "What year is it now? ";
    
    int currentYear{};
    std::cin >> currentYear; // this is going to extract what the user will write.
    
    int yearsLeft{ 2030 - currentYear }; // this is going to subtract "2030" with what the user wrote before.
    std::cout << "There is " << yearsLeft << " years left for 2030." << '\n';
    return 0;
}