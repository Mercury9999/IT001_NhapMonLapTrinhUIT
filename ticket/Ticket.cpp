#include <iostream>

int n, a, b, c, d;

void haichuso(int n, int& x, int& y, int& z, int& t) {
	int n1, n2;
	n1 = n / 10;
	n2 = n - (n1 * 10);
	x = 1;
	y = n2 - 1;
	z = 1;
	t = n1 - 1;
	if (y < 0 || t < 0) x = y = z = t = -1;
}

void bachuso(int n, int& x, int& y, int& z, int& t) {
	int n1, n2;
	n1 = n / 10;
	n2 = n - (n1 * 10);
	x = 1;
	y = n2 - 1;
	z = 1;
	t = n1 - z;

	while (t >= 10) {
		z++;
		t = n1 - z;
		if (z > 9) break;
	}

	if (y < 0 || z > 9 || t > 9) x = y = z = t = -1;
}

void bonchuso(int n, int& x, int& y, int& z, int& t) {
	int n1, n2;
	n1 = n / 100;
	n2 = n - (n1 * 100);

	x = 1;
	y = n2 - x;
	while (y >= 10) {
		x++;
		y = n2 - x;
		if (x > 9) break;
	}

	z = 1;
	t = n1 - z;
	while (t >= 10) {
		z++;
		t = n1 - z;
		if (z > 9) break;
	}

	if (x > 9 || z > 9 || y < 0 || n2 < 10) x = y = z = t = -1;

}

void spc2(int n, int& x, int& y, int& z, int& t) {
	x = y = z = t = 0;
	int n1;
	n1 = n / 10;
	x = 1; y = n1 - 1;
	z = t = 0;
}

void spc3(int n, int& x, int& y, int& z, int& t) {
	int n1;
	n1 = n / 10;
	x = 1;
	y = n1 - x;

	while (y >= 10) {
		x++;
		y = n1 - x;
		if (x > 9) break;
	}
	z = t = 0;
}


int main()
{
	std::cin >> n;
	if (n < 100) haichuso(n, a, b, c, d);
	if (n >= 100 && n <= 999) bachuso(n, a, b, c, d);
	if (n > 999) bonchuso(n, a, b, c, d);
	if (n % 10 == 0 && n < 100) spc2(n, a, b, c, d);
	if (n % 10 == 0 && n >= 100 && n <= 180) spc3(n, a, b, c, d);


	if (a != -1) std::cout << a << b << c << d;
	else std::cout << 0;

}