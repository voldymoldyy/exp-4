#include <iostream>
#include <cmath>

int main()
{
    int x;
    std::cout << "enter base: ";
    std::cin >> x;

    int y;
    std::cout << "enter exponent: ";
    std::cin >> y;

    int n;
    n = pow(x, y);
    std::cout << n;
}