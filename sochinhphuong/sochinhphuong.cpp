#include <iostream>
#include <math.h>
int L, R;
int res = 0;

int count_num_sub1(int L, int R, int& res) {
    int n = (sqrt(L) * sqrt(L) == L) ? int(sqrt(L)) : (int)sqrt(L) + 1;
    int m = (sqrt(R) * sqrt(R) == R) ? int(sqrt(R)) : int(sqrt(R)) - 1;
    for (int i = n ; i <= m; i++)
        if (i * i % 9 == 0) res++;
    return res;
}


int main()
{
    std::cin >> L >> R;
    std::cout << count_num_sub1(L, R, res);
}