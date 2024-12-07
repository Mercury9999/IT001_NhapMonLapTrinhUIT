#include <iostream>

//  &: address-of operator 
//  *: dereferencing operator
//  memory allocation: cap phat bo nho
// dynamic memory allocation: cap phat dong
// static memory allocation: cap phat tinh
   


int main()
{
	int value;
	value = 2000;
//	std::cout << *(&value);
	int* ptr = &value;    //ptr = &value;
//	std::cout << *ptr << " " << ptr << '\n';
//	*ptr -= 1; std::cout << value;

	int y = 5;
	int* ptr2 = &y;
	ptr2 = ptr;
//	std::cout << ptr2 << " " << *ptr2;
//	*ptr2 = *ptr; std::cout << *ptr2;
}