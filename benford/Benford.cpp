/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 100


void Nhapmang(int a[], int n) {
	for (int i = 0; i < 10; i++) cin >> a[i];
}

void check(int x, int& t1, int& t4) {
	if (x <= 0) return;
	int cnt = 0, temp = x;

	while (x != 0) {
		cnt++;
		x /= 10;
	}

	x = temp / (pow(10, cnt - 1));
	//	cout << x << '\n';
	if (x == 1) t1++;
	if (x == 4) t4++;
}


bool isBenford(int a[], int n) {
	int t1 = 0, t4 = 0;
	for (int i = 0; i < n; i++) check(a[i], t1, t4);
	if (t1 == 3 && t4 == 1) return 1;
	else return 0;
}



int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

	return 0;
}