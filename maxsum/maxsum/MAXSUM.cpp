#include <iostream>
#include <algorithm>

int n, a[100005];

int sum(int a[]) {
    int sub = 0;
    for (int i = 1, sign = 1; i <= n; i++) {
        sub += sign * a[i];
        sign = -sign;
    }

    return sub;
}

void maxmin(int a[], int& min1, int& max2) {
    for (int i = 1, k = 2; i <= n; i += 2, k += 2) {
        min1 = std::min(min1, a[i]);
        max2 = std::max(max2, a[k]);
    }
}


int main()
{
    std::cin >> n;
    for (int i = 1; i <= n; i++) std::cin >> a[i];

    int min1 = a[1], max2 = a[2];
    maxmin(a, min1, max2);

    int kq = 0;
    kq = sum(a) + 2 * max2 - 2 * min1;
    kq = std::max(sum(a), kq);
    std::cout << kq;
}