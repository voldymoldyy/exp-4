#include <iostream>

int main()
{
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        std::cout << "prime number";
    }
    else
    {
        std::cout << "not a prime number";
    }
}
