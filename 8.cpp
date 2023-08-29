#include <iostream>

int main()
{
    long n;
    std::cout << "enter a number: ";
    std::cin >> n;

    int first_no;
    int k = n;
    int i;
    int last_no = n % 10;

    do
    {
        first_no = k % 10;
        k = k / 10;
        i++;
    } while (k > 0);

    std::cout << first_no + last_no;
}