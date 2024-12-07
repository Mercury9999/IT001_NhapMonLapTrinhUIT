#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	int max = ((a + b) + abs(a - b)) / 2;
	int min = ((a + b) - abs(a - b)) / 2;
    
	std::cout << "max = " << max << "\n";
	std::cout << "min = " << min;

}