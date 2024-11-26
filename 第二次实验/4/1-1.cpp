#include<iostream>
using namespace std;

int main()
{
	double A[10] = { 0 };
	int num = 0;
	cout << "Enter ten numbers:";
	for (int n = 0; n < 10; n++)
	{
		double x;
		cin >> x;
		if (num == 0)
		{
			A[num] = x;
			num++;
		}
		else
		{
			int flag = 1;
			for (int m = 0; m < num; m++)
			{
				if (x == A[m])
				{
					flag = 0; break;
				}
			}
			if (flag == 1)
			{
				A[num] = x; num++;
			}
		}
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < num; i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}