#include<iostream>
using namespace std;
int gys(int x = 0,int y = 0)
{
	int a;
	a = x <= y ? x : y;
	for (; a > 0; a--)
	{
		if (x % a == 0 && y % a == 0)
			break;
	}
	return a;
}
int gbs(int x = 0,int y = 0)
{
	int a, b;
	b = gys(x, y);
	a = x * y / b;
	return a;
}

int main()
{
	int m, n, r1, r2;
	cin >> m >> n;
	r1 = gys(m, n);
	r2 = gbs(m, n);
	cout << "最大公因数=" << r1 << endl;
	cout << "最小公倍数=" << r2 << endl;
	return 0;
}