#include<iostream>
using namespace std;

int* sort(int num,int* p)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < num - 1; j++)
			if (p[j] > p[j + 1])
			{
				p[j] = p[j] + p[j + 1];
				p[j + 1] = p[j] - p[j + 1];
				p[j] = p[j] - p[j + 1];
				changed = true;
			}
	} while (changed);
	return p;
}
int main()
{
	int num=0;
	cout << "Enter the list size:";
	cin >> num;
	int* p = new int[num];
	cout << "Enter the list:";
	for (int i = 0; i < num; i++)
	{
		cin >> p[i];
	}
	p = sort(num, p);
	for (int i = 0; i < num; i++)
	{
		cout << p[i] << " ";
	}
	delete[]p;
}