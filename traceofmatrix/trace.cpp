#include <iostream>
int n, m;
float a[100][100];

int main() {
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> a[i][j];

	float sum = 0.0;
	for (int i = 0; i < n; i++) sum += a[i][i];
	std::cout << sum;
}
