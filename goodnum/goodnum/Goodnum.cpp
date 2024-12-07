	#include <iostream>
	#include <string>
	std::string m, n;


	int main()
	{
		std::cin >> n >> m;

		int k = (m.size() - 1) - (n.size() - 1);
		std::string str = m.substr(k); 
		if (n.size() - 1 == m.size() - 1) m = "0";
		else m = m.erase(k, m.size()-1);
//		std::cout << str << "\n";
//		std::cout << m << "\n";
		int i = std::stoi(m);
		if (n <= str) i += 1;
		std::cout << i;
	}