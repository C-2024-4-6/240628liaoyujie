#include<iostream>

int counts[26] = { 0 };
char s[100] = { 0 };
int num;
void count(const char s[], int counts[])
{
	for (int x = 0; x < 26; x++)
	{
		for (int y = 0; y < num; y++)
		{
			if (s[y] == 'a' + x || s[y] == 'A' + x)
				counts[x]++;
		}
	}
	for (int m = 0; m < 26; m++)
	{
		if (counts[m] != 0)
			std::cout << (char)('a' + m) << ":" << counts[m] << "times" << std::endl;
	}
}
int main()
{
	std::cout << "Enter a string:";
	for (int i = 0;; i++)
	{
		s[i] = getchar();
		if (s[i] == '\n')
			break;
		else
			num++;
	}
	count(s, counts);
	return 0;
}