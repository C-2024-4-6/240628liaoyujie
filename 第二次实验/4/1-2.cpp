#include<iostream>
using namespace std;

int listSize = 10;

double list[10];
void sort()
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize -1; j++)
			if (list[j] > list[j + 1])
			{
				list[j] = list[j] + list[j + 1];
				list[j+1]= list[j] - list[j + 1];
				list[j] = list[j] - list[j + 1];
				changed = true;
			}
	} while (changed);
	for (int i = 0; i < listSize; i++)
	{
		cout << list[i] << " ";
	}
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	sort();
}