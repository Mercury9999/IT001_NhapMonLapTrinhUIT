#include <iostream>


int main()
{
	int* a;
	a = new int[5];  // if allocation fails, an exception is thrown
	for (int i = 0; i < 5; i++) std::cin >> *(a + i);
	for (int i = 0; i < 5; i++) std::cout << *(a + i) << ' ';
	std::cout << '\n';
	for (int i = 0; i < 5; i++) std::cout << a[i] << ' ';
	delete a;
	return 0;
}