#include<iostream>
using namespace std;

int main()
{
	int a, b = 0, c = 0, d = 0, e = 0;
	cout << "��ʾ�����س�ʱ����" << endl;
	do 
	{
		a = getchar();
		if (a == ' ')
			b++;
		else
		{
			if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
				c++;
			else
				if (a >= '0' && a <= '9')
					d++;
				else
					e++;
		}
	}
	while (a != '\n');
	cout << endl;
	cout << "��ĸ��" << c << "��" << endl;
	cout << "������" << d << "��" << endl;
	cout << "�ո���" << b << "��" << endl;
	cout << "�����ַ���" << e << "��" << endl;
	return 0;
}