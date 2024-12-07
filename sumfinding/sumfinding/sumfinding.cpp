#include <iostream>
#include <algorithm>
int n, a[100005], x;


bool search(int m, int a[]) {
	for (int i = 0; i < n; i++)
		if (a[i] == m) return 1;
	return 0;
}


int binarysearch(int m, int a[], int l, int r) {
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (a[mid] == m) return 1;
		if (a[mid] < m) l = mid + 1;
		if (a[mid] > m) r = mid - 1;
	}

	return 0;
}


int main()
{
	std::cin >> n;
	for (int i = 0; i < n; i++) std::cin >> a[i];
	std::cin >> x;

	std::sort(a, a + n);

	int m;
	for (int i = 0; i < n; i++) {
		m = x - a[i];
		if (binarysearch(m, a, 0, n - 1)) {
			std::cout << "YES";
			break;
		}
		if (i == n - 1) std::cout << "NO";
	}
}
