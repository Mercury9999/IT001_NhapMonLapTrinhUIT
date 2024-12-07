#include <iostream>
struct point{
	int value;

};
point v;

int main()
{
	point* ptr = &v;
//	std::cout << ptr << '\n';

	std::cin >> v.value;
	std::cout << (*ptr).value << '\n'; //access to v.value using (*) pointer
	
	std::cout << ptr->value << '\n';   //access to v.value using arrow 
	ptr->value = 6;
	std::cout << v.value;
}