#include <iostream>
#include <string>
std::string s;

int check(char w) {
	if (w >= 'a' && w <= 'z') return 1;
	if (w >= 'A' && w <= 'Z') return -1;
    return 0;
}

void clrspc(std::string& s) {
	while (s[0] == ' ') {
		s.erase(0, 1);
	}
	while (s[s.size() - 1] == ' ') {
		s.erase(s.size() - 1, 1);
	}
	for (int i = 0; i <= s.size() - 1; i++)
		if (s[i] == ' ')
			if (s[i - 1] == ' ' || s[i + 1] == ' ') s.erase(i, 1);
}


void solve(std::string &s) {
	if (check(s[0]) == 1) s[0] -= 32;
	for (int i = 1; i <= s.size() - 1; i++) {
		if (s[i - 1] == ' ') {
			if (check(s[i]) == 1) s[i] -= 32;
			continue;
		}
		if (check(s[i]) == -1) s[i] += 32;
	}
}

    int main()
{
    std::getline(std::cin, s);

	clrspc(s);

	solve(s);

	std::cout << s;

	return 0;
}
