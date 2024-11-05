#include<iostream>
using namespace std;

int main()
{
	double x, y ,z ,e;
	cin >> x >> y >> z;
	if (x < 0 || y < 0 || z < 0 || x + y <= z || x + z <= y || y + z < x)
		cout << "´íÎó" << endl;
	else
	{
		e = x + y + z;
		cout << e << endl;
		if (x == y || x == z || y == z)
			cout << "µÈÑüÈý½ÇÐÎ" << endl;
	}
	
	return 0;
}