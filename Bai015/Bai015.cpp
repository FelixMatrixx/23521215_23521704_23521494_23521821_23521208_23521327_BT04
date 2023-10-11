#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
void LietKe(int[][50], int, int, int);
int main()
{
	int a[50][50];
	int n, m;
	Nhap(a, n, m);
	int d;
	cin >> d;
	LietKe(a, n, m, d);
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
void LietKe(int a[][50], int n, int m, int d)
{
	for (int j = 0; j < m; j++)
		if (a[d][j] % 2 == 0)
			cout << setw(4) << a[d][j];
}