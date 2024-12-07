/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>


//###INSERT CODE HERE -
#include <vector>
#include <cmath>
using namespace std;
vector<int> v;

int reverse(int n) {
    while (n != 0) {
        int x = n % 10;
        v.push_back(x);
        n /= 10;
    }

    int res = 0;
    int j = v.size() - 1, i = 0;
    //    std::cout << j << '\n';
    //    for (auto m : v) std::cout << m << " ";
    while (j != -1) {
        res += v[i] * pow(10, j);
        i++; j--;
    }
    return res;

}


int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
