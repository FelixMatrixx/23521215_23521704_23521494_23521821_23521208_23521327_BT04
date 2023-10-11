#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
int main()
{
	int a[50][50];
	int n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
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
void Xuat(int a[][50],int n,int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}