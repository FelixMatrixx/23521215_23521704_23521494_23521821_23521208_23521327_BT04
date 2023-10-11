#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
int ktCucTieu(float[][50], int, int, int, int);
float TongCucTieu(float[][50], int, int);
int main()
{
	float a[50][50];
	int n, m;
	Nhap(a, n, m);
	float s = TongCucTieu(a, n, m);
	cout << s;
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
int ktCucTieu(float a[][50], int n, int m, int i, int j)
{
	int flag = 1;
	int di[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int dj[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
	for (int t = 0; t < 8; t++)
		if (a[i + di[t]][j + dj[t]] < a[i][j] 
			&& i + di[t] >= 0 && j + dj[t] >= 0
			&& i + di[t] < n && j + dj[t] < m)
			flag = 0;
	return flag;
}
float TongCucTieu(float a[][50], int n, int m)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (ktCucTieu(a, n, m, i, j) == 1)
				s += a[i][j];
	return s;
}
