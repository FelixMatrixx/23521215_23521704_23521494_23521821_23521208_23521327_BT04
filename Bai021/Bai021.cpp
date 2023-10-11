#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
void LietKe(int[][50], int, int);
int main()
{
	int a[50][50];
	int n, m;
	Nhap(a, n, m);
	LietKe(a, n, m);
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
void LietKe(int a[][50], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
				cout << setw(4) << a[i][j];
}