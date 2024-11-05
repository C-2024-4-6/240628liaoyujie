#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	const double pai = 3.14;
	cout << "半径=", cin >> a, cout << endl;
	cout << "锥高=", cin >> b, cout << endl;
	c = a  * pai * b / 3;
	cout << "圆锥的体积=" << c << endl;
	return 0;
}