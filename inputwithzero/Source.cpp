#include <iostream>
using namespace std;

int largest_input() {
	int x; std::cin >> x;
	if (x == 0) return 0;
	if (x != 0) return max(x, largest_input());
}

int main() {
	std::cout << largest_input();
}