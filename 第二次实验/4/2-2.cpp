#include<iostream>
using namespace std;
char s[100] = { 0 };
int num = 0;
int parseHex(const char* const hexString)
{
	int S[100];
	for (int i = 0; i < num; i++)
	{
		if ((int)s[i] >= '0' && (int)s[i] <= '9')
			S[i] = (int)s[i] - '0';
		else
			S[i] = 10 + ((int)s[i] - 'A');
	}
	int res = 0;
	for (int i = num - 1; i >= 0; i--)
	{
		int a = 1;
		for (int j=num-i;j>1;j--)
		{
			a = a * 16;
		}
		res = res + a * S[i];
	}
	return res;
}
int main()
{
	for (int i = 0; i < 100; i++)
	{
		s[i] = getchar();
		if (s[i] != '\n')
			num++;
		else
			break;
	}
	cout << parseHex(s) << endl;
	return 0;
}