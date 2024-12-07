#include <iostream>
#include <algorithm>
int n, m;
int res = 0;
int a[100][100];


int main()
{
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) std::cin >> a[i][j];

	int a_min = 1e9;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) a_min = std::min(a_min, a[i][j]);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) res += (a[i][j] - a_min);
	std::cout << res;
}