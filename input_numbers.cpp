#include <iostream>

int main()
{
    std::cout << "Enter three different numbers each followed by a space: ";
    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;
    std::cout << "You've entered: " << x << ", " << y << ", and " << z << '\n';
    
    std::cin.ignore(1000, '\n');
    std::cout << "Press enter to exit...";
    std::cin.get();
    return 0;
}
