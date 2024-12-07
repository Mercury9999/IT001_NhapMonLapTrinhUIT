#include <iostream>
#include <vector>
using std::vector;


int main()
{
    int n, m;
    std::cin >> n >> m;
    
    vector<vector<int>> v;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        v[i].resize(m);
    }
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) std::cin >> v[i][j];
    std::cout << '\n';
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) std::cout << v[i][j] << " \n"[j == m - 1];

}