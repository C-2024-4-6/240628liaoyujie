#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	for (int b = 2; b <= 6; b++)
	{
		for (; a != 0; a--)
		{
			cout << "*";
		}
		cout << endl;
		a = b;
	}
	return 0;
}