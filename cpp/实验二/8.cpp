#include<iostream>
using namespace std;

int main()
{
	double a, x, y = 0, z = 1, b;
	cout << "������һ������" << endl;
	cin >> a;
	if (a < 0)
		cout << "��Ч����" << endl;
	else
	{
		if (a == 0)
			cout << a << "��ƽ���� = 0" << endl;
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
			cout << a << "��ƽ����=" << b << endl;
		}
	}
	return 0;
}