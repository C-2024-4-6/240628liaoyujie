#include<iostream>
using namespace std;

int main()
{
	bool cab[100] = { false };
	for (int n = 1; n <= 100; n++)
	{
		for (int m =1; m*n <= 100; m++)
		{
			cab[m * n - 1] = cab[m * n - 1] == false ? true : false;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (cab[i])
			cout << "L" << i + 1 << endl;
	}
}