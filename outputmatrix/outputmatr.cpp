#include <iostream>


int main()
{
    int m, n;
    std::cin >> m >> n;
    int a[50][50];
   for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) std::cin >> a[i][j];
   std::cout << '\n';
    //output

    //traditional style
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            std::cout << a[i][j] << " ";
        std::cout << '\n';
    }
    std::cout << '\n';

    //minimalism style
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) std::cout << a[i][j] << " \n"[j == n - 1];

}