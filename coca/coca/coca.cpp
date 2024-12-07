#include <iostream>
#include <string>



int main()
{
	std::string s;
	std::cin >> s;
	if (s[0] != s[s.size() - 1]) std::cout << "Win";
	else std::cout << "Lose";
}