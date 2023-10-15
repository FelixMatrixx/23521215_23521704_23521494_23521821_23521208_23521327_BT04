#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][100], int&, int&);
void XuatMaTran(int[][100], int, int);
void Xuat(string, int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    TaoMaTran(b, k, l);
    cout << "\nMa tran ban dau: ";
    XuatMaTran(b, k, l);
    Xuat("data01.inp", b, k, l);
    return 0;
}
void TaoMaTran(int a[][100], int& m, int& n)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i <= m - 1; i++)
        for (int j = 0; j <= n - 1; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
}
void XuatMaTran(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << fixed << setw(8) << setprecision(5) << a[i][j];
        cout << endl;
    }
}
void Xuat(string filename, int a[][100], int m, int n)
{
    ofstream fo(filename);
    fo << setw(10) << m;
    fo << setw(10) << n;
    fo << "\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            fo << fixed << setw(10) << setprecision(5) << a[i][j];
        fo << "\n";
    }
}