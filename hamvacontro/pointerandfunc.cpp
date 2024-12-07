#include <iostream>
using namespace std;

void NhapGiaTri(int* b) {
	cout << "Nhap gia tri vao: ";
	cin >> *b;
}

void change(int* p1) {
	*p1 *= 2;
}

void sswap(int *m, int *n) {
	int k;
	k = *m; 
	*m = *n;
	*n = k;
}

void sswap2(int& m, int& n) {
	m = m + n;
	n = m - n;
	m = m - n;
}

void sswap3(int& m, int& n) {
	m = m ^ n;
	n = m ^ n;
	m = n ^ m;
}


int main() {
	int a;
//	NhapGiaTri(&a);
//	cout << a;

/*	int i = 12;
	change(&i); cout << i;*/


	int x, y;
	x = 18; y = 19;
/*    sswap(&x, &y);
	cout << x << " " << y;*/
//  sswap2(x, y);
//	sswap3(x, y);


/*	int arr[10];
	for (int i = 0; i < 10; i++) cin >> arr[i];
	cout << *(arr) << " " << * (arr + 4);*/


/*	int num[10];
	for (int i = 0; i < 10; i++) {
		*(num+i) = i;
	}
	for (int k : num) cout << k << " ";
//	*(num + 3) = 100; cout << *(num + 3);*/

/*	int arr[10];
	for (int i = 0; i < 10; i++) cin >> arr[i];
	 int* p = arr;

	//truy xuat toi phan tu thu i cua mang
	cout << p[5] << " " << *(p + 5) << " " << *(&arr[5]); cout << '\n';*/
}
