#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;

int main()
{
	cout << "Celsius	Fahrenheit	|	Fahrenheit	Celsius" << endl;
	for (double c = 40, f = 120; c >= 31; c--, f = f - 10)
	{
		cout << fixed << setprecision(1) << c << "	" << celsius_to_fah(c) << "		|	" << f << "		" << fahrenheit_to_cels(f) << endl;
	}
	return 0;
}