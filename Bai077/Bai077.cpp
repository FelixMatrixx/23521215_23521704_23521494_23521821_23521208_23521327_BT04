#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&, int&);
float LonNhat(float[][100], int, int);
void LietKe(float[][100], int, int, int);

int main()
{
	float a[100][100];
	int m, n, d;
	Nhap(a, m, n, d);
	LietKe(a, m, n, d);
	return 0;
}
void Nhap(float a[][100], int& m, int& n, int& d)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	cout << "Nhap chi so (index) cua cot muon tinh tong cac so chinh phuong: ";
	cin >> d;
}
float LonNhat(float a[][100], int d, int n)
{
	float lc = a[d][0];
		for (int j = 0; j < n; j++)
			if (a[d][j] > lc)
				lc = a[d][j];
	return lc;
}
void LietKe(float a[][100], int m, int n, int d)
{
	float lc = LonNhat(a, d, n);
	for (int j = 0; j <= n - 1; j++)
		if (a[d][j] == lc)
			cout << "\nSo lon nhat tren hang la: " << a[d][j];
}