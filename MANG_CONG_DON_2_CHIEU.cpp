#include <iostream>
using namespace std;
void nhap(int m, int n, int a[][100],int b[][101]) {
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j]=1 ;
			b[i][j] = a[i][j];
		}
	}
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	}

void congdon(int m, int n,int a[][100], int b[][101]) {
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			b[i][j] = b[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
		}
	}
	cout << endl;
}

void xuat(int m, int n,int b[][101]) {
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			cout << b[i][j]<<" ";
		}
		cout << endl;
	}
}
int main()
{
	int n, m;
	cin >> m >>n;
	int a[100][100] = { 0 };
	int b[101][101] = { 0 };
	nhap(m, n, a,b);
	congdon(m, n, a, b);
	xuat(m, n, b);
	return 0;
}

