#include<iostream>
using namespace std;

int main()
{
	int a, b = 0, c = 0, d = 0, e = 0;
	cout << "提示：按回车时结束" << endl;
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
	cout << "字母有" << c << "个" << endl;
	cout << "数字有" << d << "个" << endl;
	cout << "空格有" << b << "个" << endl;
	cout << "其他字符有" << e << "个" << endl;
	return 0;
}