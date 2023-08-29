#include <iostream>

int main()
{
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    int sum = 0;
    int last_no = 0;

    do
    {
        last_no = n % 10;
        sum = sum + last_no;
        n = n / 10;

    } while (n > 0);

    std::cout << sum;
}