#include <iostream>
#include <vector>


int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v;

	int x, i = 0;
	do {
		std::cin >> x;
		v.push_back(x);
		i++;
	} while (i < n);

	int p, k;
	std::cin >> p; std::cin >> k;

	v.erase(v.begin() + p, v.begin() + p + k);
	for (auto f : v) std::cout << f << " ";
}