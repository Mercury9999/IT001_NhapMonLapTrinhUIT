#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


void tinhGTthuc() {
    cout << "Nhap so bac cua da thuc can tinh: " << '\n';
    int n;
    cin >> n;
    cout << "Nhap gia tri cua an X: " << '\n';
    int x;
    cin >> x;

    int t = 0;
    for (int i = n; i >= 0; i--) {
        if (i == 0) {
            cout << "Nhap he so tu do: ";
        }
        else
            cout << "Nhap he so cho X mu " << i << " :";
        int a;
        cin >> a;
        t += a * pow(x, i);
    }

    cout << "Gia tri cua da thuc bac " << n << " vua nhap la: " << t << '\n';
    cout << '\n';
}

void giaiHPT() {
    int a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34;
    cout << "Nhap a11 a12 a13 a14: " << '\n';
    cin >> a11 >> a12 >> a13 >> a14;
    cout << "Nhap a21 a22 a23 a24: " << '\n';
    cin >> a21 >> a22 >> a23 >> a24;
    cout << "Nhap a31 a32 a33 a34: " << '\n';
    cin >> a31 >> a32 >> a33 >> a34;

    int d = a11 * a22 * a33 + a12 * a23 * a31 + a21 * a32 * a13 - a13 * a22 * a31 - a12 * a21 * a33 - a11 * a32 * a23;
    int dx = a14 * a22 * a33 + a12 * a23 * a34 + a24 * a32 * a13 - a13 * a22 * a34 - a12 * a24 * a33 - a23 * a32 * a14;
    int dy = a11 * a24 * a33 + a14 * a23 * a31 + a21 * a34 * a13 - a13 * a24 * a31 - a14 * a21 * a33 - a23 * a34 * a11;
    int dz = a11 * a22 * a34 + a12 * a24 * a31 + a21 * a32 * a14 - a14 * a22 * a31 - a12 * a21 * a34 - a24 * a32 * a11;

    if (d == 0) {
        if ((dx == 0) && (dy == 0) && (dz == 0))
            cout << "He phuong trinh vo so nghiem" << '\n';
        else
            cout << "He phuong trinh vo nghiem" << '\n';
    }
    else {
        cout << "He phuong trinh co nghiem la: " << '\n';
        cout << "X = " << dx * 1.0 / d << '\n';
        cout << "Y = " << dy * 1.0 / d << '\n';
        cout << "Z = " << dz * 1.0 / d << '\n';

    }
    cout << '\n';
}

void tinhGTdayso() {
    int n;
    cout << "Nhap gia tri n:" << '\n';
    cin >> n;

    float t = 0;
    for (int i = 1; i <= n; i++)
        t += 1 * 1.0 / i;

    cout << setprecision(2) << fixed << "Gia tri cua day so can tinh la : " << t << '\n';
    cout << '\n';
}

void giaodien() {
    cout << "------------CONG CU TINH TOAN------------" << '\n';
    cout << "Nhap yeu cau can thuc hien: " << '\n';
    cout << "Nhap [1] de tinh gia tri da thuc" << '\n';
    cout << "Nhap [2] de giai he phuong trinh bac nhat ba an so" << '\n';
    cout << "Nhap [3] de tinh gia tri day so" << '\n';
    cout << "Nhap [4] de thoat chuong trinh" << '\n';
}

void congcu() {
    int yeucau;
    cin >> yeucau;
    while (yeucau > 0 && yeucau < 5) {
        if (yeucau == 1)
            tinhGTthuc();
        else if (yeucau == 2)
            giaiHPT();
        else if (yeucau == 3)
            tinhGTdayso();
        else if (yeucau == 4)
            break;
        giaodien();
        cin >> yeucau;
    }
}

int main() {
    giaodien();
    congcu();
    return 0;
}