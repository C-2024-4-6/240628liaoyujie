#include<iostream>
using namespace std;

int main()
{
	double a, b;
	int d = 1;
	char c;
	for (;;)
	{
		cout << "提示：请输入数字" << endl;
		cin >> a;
		for (d = 1; d == 1;)
		{
			cout << "提示：请输入符号，输入0归零" << endl;
			cin >> c;
			switch (c)
			{
			case '+':
			{
				cout << "提示：请输入数字" << endl;
				cin >> b;
				a = a + b;
				cout << a << endl;
				break;
			}
			case '-':
			{
				cout << "提示：请输入数字" << endl;
				cin >> b;
				a = a - b;
				cout << a << endl;
				break;
			}
			case '*':
			{
				cout << "提示：请输入数字" << endl;
				cin >> b;
				a = a * b;
				cout << a << endl;
				break;
			}
			case '/':
			{
				cout << "提示：请输入数字" << endl;
				cin >> b;
				if (b == 0)
				{
					cout << "错误,已重置" << endl;
					d = 0;
				}
				else
				{
					a = a / b;
					cout << a << endl;
				}
				break;
			}
			case '%':
			{
				cout << "提示：请输入数字" << endl;
				cin >> b;
				if (b != int(b) || a != int(a)||b == 0)
				{
					cout << "错误，已重置" << endl;
					d = 0;
				}
				else
				{
					a = int(a) % int(b);
					cout << a << endl;
				}
				break;
			}
			default :
			{
				cout << "错误，错误已重置" << endl;
				d = 0;
				break;
			}
			}
		}
	}
	return 0;
}