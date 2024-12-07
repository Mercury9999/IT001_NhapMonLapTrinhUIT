#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sum = 0;
    int i, j;
    int col, row;


    cin >> col;

    cin >> row;


    int matrix[20][20];


    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {

            cin >> matrix[i][j];

        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }cout << sum;

 
}