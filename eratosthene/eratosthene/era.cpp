#include <iostream>
#include <math.h>
using namespace std;

void Eratosthenes(int n)
{
    bool prime[500];
    for (int p = 1; p <= 500; p++) prime[p] = true;

    for (int p = 2; p * p <= 500; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * 2; i <= 500; i += p)
                prime[i] = false;
        }
    }

    int sum = 0;
    int dem = 0;
    for (int p = 2; p <= 1000; p++)
        if (prime[p]) {
            sum += p;
            dem++;
            if (dem == n) {
                cout << "Tong " << n << " so nguyen to dau tien la:" << sum;
                break;
            }
        }
}


int main() {
    int n;
    cin >> n;
    while (n <=0 || n > 50){
        cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai."; 
        cin >> n;
    }
    Eratosthenes(n);
}
