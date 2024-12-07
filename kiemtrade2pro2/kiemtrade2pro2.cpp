#include <iostream>
#include <vector>
#include <math.h>
int n;
int res = 0;

int find_num_sub1(int n) {
	for (int a = 1; a < n; a++)
		for (int b = 1; b < n; b++)
			for (int c = 1; c < n; c++)
				for (int d = 1; d < n; d++)
					if (a * b + c * d == n) res++;
	return res;
}

int find_num_sub2(int n) {

	std::vector<int> v(n + 1, 0);

	for (int i = 1; i < n; i++)
		for (int j = 1; j <= sqrt(i); j++)
			if (i % j == 0) v[i] += (j * j == i ? 1 : 2);

	for (int i = 1; i < n; i++)
		res += v[i] * v[n - i];    // so cach chon a, b sao cho a + b = n
	return res;
}


int main()
{
	std::cin >> n;
//	std::cout << find_num_sub1(n);
	std::cout << find_num_sub2(n);
	return 0;
}