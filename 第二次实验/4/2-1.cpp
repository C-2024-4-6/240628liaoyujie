#include<iostream>
using namespace std;

char Ss[1000] = { 0 }, Fs[1000] = { 0 };
int m = 0, n = 0;
int indexof(const char* s1, const char* s2)
{
	int num = -1;
	for (int x = 0; x < m; x++)
	{
		int flag = 1;
		if (s1[0] == s2[x])
		{
			for (int y = 0; y < n; y++)
			{
				if (s1[y] != s2[x + y])
				{
					flag = 0; break;
				}
			}
			if (flag == 1)
				num = x;
		}
	}
	return num;
}
int main()
{
	cout << "Enter the first string:";
	for (int y = 0;; y++)
	{
		Fs[y] = getchar();
		if (Fs[y] == '\n')
			break;
		else
			n++;
	}
	cout << "Enter the second string:";
	for (int x = 0;; x++)
	{
		Ss[x] = getchar();
		if (Ss[x] == '\n')
			break;
		else
			m++;
	}
	cout << indexof(Fs,Ss) << endl;
	return 0;
}