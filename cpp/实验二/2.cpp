#include<iostream>
using namespace std;

int main()
{
	double x, y = 0;
	cin >> x;
	if (x <= 0)
		cout << "´íÎó" << endl;
	else
	{
		if (x > 0 && x < 10)
			if (x < 5)
				if (x < 1)
					y = 3 - 2 * x;
				else
					y = 2 / (4 * x) + 1;
			else
				y = x * x;
		cout << "y=" << y << endl;
	}
	return 0;
}