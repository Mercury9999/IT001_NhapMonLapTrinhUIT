#include <iostream>
using std::cout; 
using std::cin;
int x;

void hcn() {
	for (int i = 1; i <= 6; i++) cout << x << " ";
	cout << "\n";
	cout << x << "         " << x << "\n";
	cout << x << "         " << x << "\n";
	for (int i = 1; i <= 6; i++) cout << x << " ";
	cout << "\n";
}

void tgd() {
	cout << "     " << x << "\n";
	cout << "    " << x << " " << x << "\n";
	cout << "   " << x << "   " << x << "\n";
	cout << "  " << x << "     " << x << "\n";
	cout << " " << x << "       " << x << "\n";
	for (int i = 1; i <= 6; i++) cout << x << " ";
}


int main()
{
	cin >> x;
    
	hcn();

	tgd();

}