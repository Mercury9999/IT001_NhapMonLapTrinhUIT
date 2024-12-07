#include <iostream>
#include <string>

void outp1(int* p) {
	for (int i = 0; i < 10; i++) std::cin >> p[i];

	*(p + 5) = 100;
	for (int i = 0; i < 10; i++) std::cout << *(p + i) << " ";
}


int main()
{
	int a[10];
	outp1(a);
}