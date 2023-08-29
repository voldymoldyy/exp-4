#include <iostream>

int main()
{
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            std::cout << i;
            std::cout << "\n";
        }
        }
}