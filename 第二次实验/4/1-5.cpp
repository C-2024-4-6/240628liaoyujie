#include<iostream>
using namespace std;

int main()
{
	int Ss[1000] = { 0 }, Fs[1000] = { 0 }, m = 0, n = 0,num=-1;
	cout << "Enter the first string:";
	for (int y = 0;; y++)
	{
		Fs[y] = getchar();
		if (Fs[y] == '\n')
			break;
		else
			n++;
	}
	cout << "Enter the second string :";
	for (int x = 0;; x++)
	{
		Ss[x] = getchar();
		if (Ss[x] == '\n')
			break;
		else
			m++;
	}
	for (int x = 0; x < m; x++)
	{
		int flag = 1;
		if (Fs[0] == Ss[x])
		{
			for (int y = 0; y < n; y++)
			{
				if (Fs[y] != Ss[x + y])
				{
					flag = 0; break;
				}
			}
			if (flag == 1)
				num = x;
		}
	}
	cout << num << endl;
	return 0;
}