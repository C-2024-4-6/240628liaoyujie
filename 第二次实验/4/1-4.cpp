#include<iostream>
using namespace std;
int list1[80]; int size1; int list2[80]; int size2; int list3[80];

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int listSize = size1 + size2;
	int m = 0, n = 0;
	for (; m < size1; m++)
	{
		list3[m] = list1[m];
	}
	for (; n <= size2; n++)
	{
		list3[m + n] = list2[n];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list3[j] > list3[j + 1])
			{
				list3[j] = list3[j] + list3[j + 1];
				list3[j + 1] = list3[j] - list3[j + 1];
				list3[j] = list3[j] - list3[j + 1];
				changed = true;
			}
	} while (changed);
	for (int i = 0; i < listSize; i++)
	{
		cout << list3[i] << " ";
	}
}

int main()
{
	cout << "Enter list1: ";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2: ";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	cout << "The merged list is";
	merge(list1,size1,list2,size2,list3);
}