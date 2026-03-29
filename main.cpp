#include <iostream>

int main()
{
    std::cout << "Choose two integers" << '\n';

    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    std::cout << "The sum of " << x << " and " << y << " is " << x + y << '\n';

    return 0;
}
