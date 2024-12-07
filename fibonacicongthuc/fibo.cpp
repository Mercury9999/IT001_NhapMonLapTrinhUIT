#include <iostream>
#include <cmath>


int main()
{
	int n;
	std::cin >> n;
	int res =  (1 / sqrt(5)) * (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n));
	std::cout << res;
}