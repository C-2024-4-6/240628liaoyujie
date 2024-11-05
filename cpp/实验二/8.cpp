#include<iostream>
using namespace std;

int main()
{
	double a, x, y = 0, z = 1, b;
	cout << "请输入一个数字" << endl;
	cin >> a;
	if (a < 0)
		cout << "无效数字" << endl;
	else
	{
		if (a == 0)
			cout << a << "的平方根 = 0" << endl;
		else
		{
			x = a;
			while (z >= 0.00001)
			{
				y = (x + (a / x)) / 2;
				z = x - y;
				z = z >= 0 ? z : -z;
				x = y;
			}
			b = y;
			cout << a << "的平方根=" << b << endl;
		}
	}
	return 0;
}