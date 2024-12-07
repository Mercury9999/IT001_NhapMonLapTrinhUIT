#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string s, k;
	std::cin >> s;
	k = s;
	std::reverse(s.begin(), s.end());
	k == s ? std::cout << "true" : std::cout << "false";
}
