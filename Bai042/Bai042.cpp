#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
void Xuat(int[][100], int, int);
int ktDang2m(int);
int TongCot(int[][100], int, int, int);

int main()
{
    int b[100][100];
    int k, l;
    int c;
    Nhap(b, k, l, c);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    int kq = TongCot(b, k, l, c);
    cout << "Tong gia tri co dang 2m tren cot: " << kq;
    return 0;
}
void Nhap(int a[][100], int& m, int& n, int& c)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap c: ";
    cin >> c;
    for (int i = 0; i <= m - 1; i++)
        for (int j = 0; j <= n - 1; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
}
void Xuat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << fixed << setw(8) << setprecision(5) << a[i][j];
        cout << endl;
    }
}
int ktDang2m(int n)
{
    int flag = 1;
    int t = n;
    while (t > 1)
    {
        if (t % 2 != 0)
            flag = 0;
        t /= 2;
    }
    return flag;
}
int TongCot(int a[][100], int m, int n, int c)
{
    int s = 0;
    for (int i = 0; i < m; i++)
        if (ktDang2m(a[i][c]) == 1)
            s += a[i][c];
    return s;
}