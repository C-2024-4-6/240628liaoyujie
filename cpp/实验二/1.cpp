#include<iostream>
using namespace std;

int main()
{
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z')
		a = a - 32, cout << char(a) << endl;
	else
		cout << int(a) << endl;
	return 0;
}