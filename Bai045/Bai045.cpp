#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
float TongDuong(float[][50], int, int);
int DemDuong(float[][50], int, int);
float TbcDuong(float[][50], int, int);
int main()
{
	float a[50][50];
	int n, m;
	Nhap(a, n, m);
	float kq = TbcDuong(a, n, m);
	cout << kq;
	return 0;
}
void Nhap(float a[][50], int& n, int& m)
{
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}
float TongDuong(float a[][50], int n, int m)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] > 0)
				s += a[i][j];
	return s;
}
int DemDuong(float a[][50], int n, int m)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] > 0)
				dem++;
	return dem;
}
float TbcDuong(float a[][50], int n, int m)
{
	float s = TongDuong(a, n, m);
	int dem = DemDuong(a, n, m);
	float kq = s / dem;
	return kq;
}