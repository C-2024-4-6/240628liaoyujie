#include<iostream>
using namespace std;

int main()
{
	double a=0.8, b=2, c=0,d=0,e;
	while (c <= 100)
	{
		e = a * c / d;
		c = c + b;
		b = b * 2;
		d++;
	} 
	cout << e << endl;
	return 0;
}