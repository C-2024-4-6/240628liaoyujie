#include<iostream>
using namespace std;

int main()
{
	double a, b;
	int d = 1;
	char c;
	for (;;)
	{
		cout << "��ʾ������������" << endl;
		cin >> a;
		for (d = 1; d == 1;)
		{
			cout << "��ʾ����������ţ�����0����" << endl;
			cin >> c;
			switch (c)
			{
			case '+':
			{
				cout << "��ʾ������������" << endl;
				cin >> b;
				a = a + b;
				cout << a << endl;
				break;
			}
			case '-':
			{
				cout << "��ʾ������������" << endl;
				cin >> b;
				a = a - b;
				cout << a << endl;
				break;
			}
			case '*':
			{
				cout << "��ʾ������������" << endl;
				cin >> b;
				a = a * b;
				cout << a << endl;
				break;
			}
			case '/':
			{
				cout << "��ʾ������������" << endl;
				cin >> b;
				if (b == 0)
				{
					cout << "����,������" << endl;
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
				cout << "��ʾ������������" << endl;
				cin >> b;
				if (b != int(b) || a != int(a)||b == 0)
				{
					cout << "����������" << endl;
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
				cout << "���󣬴���������" << endl;
				d = 0;
				break;
			}
			}
		}
	}
	return 0;
}