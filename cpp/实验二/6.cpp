#include<iostream>
using namespace std;

int main()
{
	double a, b, c;
	int e, f;
	cout << "请输入两个数字" << endl;
	cin >> a >> b;
	if (a != int(a) || b != int(b) || a == 0 || b == 0)
		cout << "无效数字，请输入整数" << endl;
	else
	{
		int A, B;
		A = int(a), B = int(b);
		c = A >= B ? B : A;
		for (int d = 1; d <= c; d++)
		{
			if (A % d == 0 && B % d == 0)
				e = d;
		}
		f = A * B / e;
		cout << "公因数=" << e << "公倍数=" << f << endl;
	}
	return 0;
}