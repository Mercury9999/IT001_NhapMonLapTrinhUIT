#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
int n;
std::vector<int64_t> a;


int64_t res(std::vector<int64_t> v) {
    int64_t k = v[0];
    for (int i = 1; i < v.size(); i++) {
        k = std::gcd(k, v[i]);
    }
    return k;
}

void sub1() {
    int64_t x;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        a.push_back(x);
    }
    int64_t temp = 0, best_i = -1;
    int64_t best_r = -1;
    for (int i = 0; i < a.size(); i++) {
        temp = a[i];
        a.erase(a.begin() + i);
//        for (auto m : a) std::cout << m << " "; std::cout << '\n';
        int current = res(a);
//        std::cout << res(a) << '\n';
        if (current > best_r) {
            best_i = i;
            best_r = current;
        }
        a.insert(a.begin() + i, temp);
    }
    std::cout << best_i + 1 << " " << best_r;
}


void sub2(int n) {
    int a[100];
    for (int i = 1; i <= n; i++) std::cin >> a[i];
    int suf[100], pre[100], x, del, m = 0;
    pre[0] = suf[n + 1] = 0;
    for (int i = 1; i <= n; i++) pre[i] = std::gcd(pre[i - 1], a[i]);
    for (int i = n; i >= 1; i--) suf[i] = std::gcd(suf[i + 1], a[i]);
 
    for (int i = 1; i <= n; i++) {
        x = std::gcd(pre[i - 1], suf[i + 1]);
        if (x > m) {
            m = x;
            del = i;
        }
    }
    std::cout << del << " " << m;
}


int main()
{
    std::cin >> n;
    
//    sub1();

    sub2(n);


}