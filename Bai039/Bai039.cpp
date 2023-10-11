#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
int TichCot(int[][50], int, int, int);
int main()
{
	int a[50][50];
	int n, m;
	Nhap(a, n, m);
	int c;
	cin >> c;
	int T=TichCot(a, n, m, c);
	cout << T;
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
int TichCot(int a[][50], int m, int n, int c)
{
	int T = 1;
	for (int i = 0; i < n; i++)
		if (a[i][c] % 2 == 0)
			T *= a[i][c];
	return T;
}