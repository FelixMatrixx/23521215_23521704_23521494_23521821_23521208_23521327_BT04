#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
int TongNguyenTo(int[][50], int, int);
int main()
{
	int a[50][50];
	int n, m;
	Nhap(a, n, m);
	int s = TongNguyenTo(a, n, m);
	cout << s;
	return 0;
}
void Nhap(int a[][50], int& n, int& m)
{
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}
int TongNguyenTo(int a[][50], int n, int m)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			int dem = 0;
			for (int k = 1; k <= a[i][j]; k++)
				if (a[i][j] % k == 0)
					dem++;
			if (dem == 2)
				s += a[i][j];
		}
	return s;
}