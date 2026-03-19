#include <iostream>

int main()
{
    std::cout << "Enter three different numbers each followed by a space: ";
    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;
    std::cout << "You've entered: " << x << ", " << y << ", and " << z << "." << '\n';
    return 0;
}