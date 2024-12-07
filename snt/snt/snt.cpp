#include <iostream>

bool prime[1000];
int m = 0;

int reverse(int x) {
    int dem = 0;
    int k = x;
    int bow = 1;

    while (k != 0) {
        k /= 10;
        dem++;
    }
    //    std::cout << dem << '\n';

    while (dem != 0) {
        for (int i = 1; i <= dem - 1; i++) bow *= 10;
        k += (x % 10) * bow;
        dem--;
        x /= 10;
        bow = 1;
    }

    return k;
}



void Eratosthenes(int a, int b)
{
    for (int i = 2; i <= 500; i++) prime[i] = true;
    for (int i = 2; i*i <= 500; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j <= 500; j += i)
                prime[j] = false;
        }
    }

    for (int i = a; i <= b; i++) if (prime[i] && prime[reverse(i)]) m++;
}


int main()
{
    int a, b;
    std::cin >> a >> b;

    Eratosthenes(a, b);
    std::cout << m;
}