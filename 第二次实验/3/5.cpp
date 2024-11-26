#include<iostream>
using namespace std;

int peach(int day)
{
	int sum = 1;
	for (int i = 1; i < day; i++)
	{
		sum = (sum + 1) * 2;
	}
	return sum;
}
int main()
{
	cout << peach(10) << endl;
	return 0;
}
