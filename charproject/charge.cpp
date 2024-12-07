#include <iostream>


int main()
{
	int a[100], b[100];
	int c[100];
	int n, m;

	std::cin >> n; 
	for (int i = 0; i < n; i++) std::cin >> a[i];
	std::cin >> m;
	for (int i = 0; i < m; i++) std::cin >> b[i];

	int i = 0, j = 0, k = 0;
/*	do {
		if (a[i] < b[j]) c[k] = a[i], i++;
		else c[k] = b[j], j++;
		k++;
	} while (i < n || j < m);*/
	for (int i = 0; i < n + m - 1; i++) std::cout << c[i] << " ";
}





