#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char* s);


int main()
{
	char* s;
	s = new char[MAX];
	//gets(s);	//Nhap chuoi s	
	cin.getline(s, MAX - 1);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

void removechar(char s[], int t)
{
	int j;
    for (j = t; j < strlen(s); j++) s[j] = s[j + 1];
}


int check(char w) {
	if (w >= 'a' && w <= 'z') return 1;
	if (w >= 'A' && w <= 'Z') return -1;
	return 0;
}


void solve(char s[]) {
	if (check(s[0]) == 1) s[0] -= 32;
	for (int i = 1; i <= strlen(s) - 1; i++) {
		if (s[i - 1] == ' ') {
			if (check(s[i]) == 1) s[i] -= 32;
			continue;
		}
		if (check(s[i]) == -1) s[i] += 32;
	}
}


void Chuanhoa(char* s) {

	while (s[0] == ' ') {
		removechar(s, 0);
	}
	
	int n = strlen(s) - 1;
	while (s[n] == ' ') removechar(s, n);

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ')
			if (s[i-1] == ' ' || s[i+1] == ' ') removechar(s, i);
	}


	solve(s);

//	cout << n << '\n';

}
