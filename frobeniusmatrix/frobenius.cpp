#include <iostream>
float a[100][100];


bool check(float a[][100], int n) {
    int k = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i && a[i][j] != 1) { k = 0; break; };
            if (j > i && a[i][j] != 0) { k = 0; break; };
        }
        if (k == 0) break;
    }

    int save = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (j < i && a[i][j] != 0) { save = j; break; };
        if (save != -1) break;
    }
    if (save != -1) 
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i && a[i][j] != 0 && j != save) { k = 0; break; };
        }
        if (k == 0) break;
    }


    if (k == 1) return true;
    else return false;
}



int main()
{
    int n;
    std::cin >> n >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) std::cin >> a[i][j];
    std::cout << '\n';

    if (check(a, n)) std::cout << "Yes";
    else std::cout << "No";


}