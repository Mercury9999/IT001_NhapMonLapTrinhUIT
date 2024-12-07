#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	float p; 
	p = (float(a) + b + c) / 2;
	p = sqrt(p * (p - a) * (p - b) * (p - c));
	std::cout << std::setprecision(2) << std::fixed << p;

}