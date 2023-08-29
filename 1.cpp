#include <iostream>

int main()
{
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 2; i <= 2 * n; i = i + 2)
    {
        sum = sum + i;
    }
    std::cout << "sum of " << n << " terms is : " << sum;
}