#include <iostream>
#include <algorithm>
using namespace std;

void example() {
    // a = 5(00000101), b = 9(00001001)
    int a = 5;
    int b = pow(2, 30);

    // The result is 00000001
    cout << "a = " << a << "," << " b = " << b << '\n';
    cout << "a & b = " << (a & b) << endl;

    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;

    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;

    // The result is 11111010
    cout << "~a = " << (~a) << endl;

    // The result is 00010010
    cout << "b << 1" << " = " << (b << 2) << endl;

    // The result is 00000100               
    cout << "b >> 1 " << "= " << (b >> 1) << endl;

}

void evencheck() {
    int a = 20;
    (a & 1) ? cout << "odd" : cout << "even";
}

void findodd() {
    int a[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
//    for (int i = 0; i < n; i++) std::cout << a[i] << " ";

/*    int res;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) res = a[i + 1];
    }
    cout << res;*/

    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= a[i];
    cout << res;
// su dung tinh chat: X ^ X = 0, X ^ 0 = X 
}

void sswap() {
    int x = 18, y = 19;
    x = x ^ y;  
    y = x ^ y;
    x = y ^ x;
    cout << x << " " << y;
}


int main() {
    std::cin.tie(0)->ios_base::sync_with_stdio(0);
    example();
//    evencheck();
//    findodd();   // find the odd occuring number

//    sswap();


    return 0;
}