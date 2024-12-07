#include <iostream>
#include <vector>
using namespace std;
int a[100001], b[100001], n, m;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> m;
    for (int i = 1; i <= m; i++) cin >> b[i];
    int i = 1, j = 1;
    vector<int> c;
    while (i <= n || j <= m) {
        if (j == m + 1 || (i <= n && a[i] <= b[j])) c.push_back(a[i++]);
        else c.push_back(b[j++]);
    }
    for (auto it : c) cout << it << " ";
    return 0;
}