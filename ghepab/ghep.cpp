#include <iostream>
#include <vector>
int a[10000], b[10000], n, m;


int main() {
    std::cin >> n;
    for (int i = 1; i <= n; i++) std::cin >> a[i];
    std::cin >> m;
    for (int j = 1; j <= m; j++) std::cin >> b[j];
    
    int i = 1, j = 1;
    std::vector<int> c;
    while (i <= n || j <= m) {
        if (j == m + 1 || (i <= n && a[i] <= b[j])) c.push_back(a[i++]);
        else c.push_back(b[j++]);
    }
    for (auto &l : c) std::cout << l << " ";   
}