#include<iostream>
using namespace std;

int main()
{
	double a, b;
	int c;
	cout << "请输入华氏度：", cin >> a, cout << "℉" << endl;
	b = (a - 32) * 5 / 9;
	b = int(b * 100);
	c = int(b) % 10;
	if (c >= 5)
		b = b + 1;
	b = double(b) / 100;
	cout << "摄氏度为" << b << "℃" << endl;
}