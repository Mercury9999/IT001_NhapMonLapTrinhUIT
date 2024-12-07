#include <iostream>

int reverse(int x) {
    int dem = 0, n = x;
    while (x != 0) {
        x /= 10;
        dem++;
    }
    dem--;
    int bowl, k = 0;
    while (dem != -1) {
        bowl = 1;
        for (int i = 1; i <= dem; i++, bowl *= 10);
        k += (n % 10) * bowl;
        n /= 10;
        dem--;
    }
    return k;
}

bool isprime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    for (int i = 2; i * i <= x; i++) if (x % i == 0) return false;
    return true;
}


int main()
{
    int a, b;
    std::cin >> a >> b;

    int m = 0;
    for (int i = a; i <= b; i++) if (isprime(i) == true && isprime(reverse(i)) == true) m++;
    std::cout << m;

}