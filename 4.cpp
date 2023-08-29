#include <iostream>

int main()
{
    int n;
    std::cout << "enter number of prompts: ";
    std::cin >> n;

    int count_zero = 0;
    int count_positive = 0;
    int count_negative = 0;

    for (int i = 0; i < n; i++)
    {
        int k;
        std::cout << "enter a number: ";
        std::cin >> k;

        if (k > 0)
        {
            count_positive++;
        }
        else if (k == 0)
        {
            count_zero++;
        }
        else
        {
            count_negative++;
        }
    }
    std::cout << "zero: " << count_zero;
    std::cout << "\n";
    std::cout << "positive: " << count_positive;
    std::cout << "\n";
    std::cout << "negative: " << count_negative;
}