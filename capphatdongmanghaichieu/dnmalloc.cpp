#include <iostream>


int** Input(int n, int m) {
    int** tmp;
    tmp = new int*[n];
    for (int i = 0; i < n; i++) tmp[i] = new int[m];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) std::cin >> tmp[i][j];
    return tmp;
}


void Output(int n, int m, int** p) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) std::cout << p[i][j] << " \n"[j == m - 1];
}


int main()
{    int n, m;
    std::cin >> n >> m;
    int** p;
    //Cap phat mang dong hai chieu 
    p = Input(n, m); std::cout << '\n';
    Output(n, m, p);

    //giai phong mang dong hai chieu
    for (int i = 0; i < n; i++) {
        delete[] p[i]; 
        p[i] = NULL;
    }
    delete[] p;
    p = NULL;
}