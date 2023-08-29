#include <iostream>
#include <cmath>

int main()
{
    long n;
    std::cout << "enter a number: ";
    std::cin >> n;

    int last_no = 0;
    int count = 0;
    int k = 0;
    int sum = 0;
    int z = n;
    int l = n;

    do
    {
        n = n / 10;
        count++;
    } while (n > 0);

    for (int i = 1; i <= count; i++)
    {
        last_no = z % 10;
        k = pow(last_no, count);
        sum = sum + k;

        z = z / 10;
    }

    if (sum == l)
    {
        std::cout << l << " is armstrong number";
    }
    else
    {
        std::cout << l << " is not armstrong number";
    }
}