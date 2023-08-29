#include <iostream>

int main()
{
    long n;
    std::cout << "enter a number: ";
    std::cin >> n;

    int i = 0;
    int fact = 1;
    int sum = 0;
    int last = 0;
    long k;
    int total_fact;

    for (int k = n; k > 0; k = k / 10)
    {
        int last = k % 10;
        for (int j = last; j > 0; j--)
        {
            fact = fact * j;
        }
        total_fact = fact;
        fact = 1;
        sum = sum + total_fact;
    }
    if (sum == n)
    {
        std::cout << n << " is a strong number";
    }
    else
    {
        std::cout << n << " is not a strong number";
    }
}