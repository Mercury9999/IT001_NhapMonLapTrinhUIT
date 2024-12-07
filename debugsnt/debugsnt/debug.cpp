#include <iostream>

int mode(int m, int n) {
    m -= n;
    return m < n ? m : mode(m, n);
}


int main()
{
    int m, n;
    std::cin >> m >> n;
    
    if (m < n) {
        int req = m;
        m = n;
        n = req;
    }

    std::cout << mode(m, n);
}