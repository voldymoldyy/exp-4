#include <iostream>

int main()
{
    int M;
    std::cout << "enter starting point: ";
    std::cin >> M;

    int N;
    std::cout << "enter ending point: ";
    std::cin >> N;

    int sum = 0;
    for (int i = M; i <= N; i = ++i)
    {
        sum = sum + i;
    }
    std::cout << "sum of is: " << sum;
    return 0;
}