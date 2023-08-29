#include <iostream>

int main()
{
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    int k = n;

    int last_no = 0;
    int reverse = 0;

    while (n > 0)
    {
        last_no = n % 10;
        reverse = reverse * 10 + last_no;
        n = n / 10;
    }

    if (k == reverse)
    {
        std::cout << "the number is a palindrome";
    }
    else
    {
        std::cout << "the number is not a palindrome";
    }
}