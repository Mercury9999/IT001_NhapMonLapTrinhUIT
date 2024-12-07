#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    
    int count = 0;
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            for (int c = 1; c <= n; c++)
                for (int d = 1; d <= n; d++)
                    if (a * b + c * d == n) count++;

    std::cout << count;
}