#include<iostream>
using namespace std;

int main()
{
	double a, b;
	int c;
	cout << "�����뻪�϶ȣ�", cin >> a, cout << "�H" << endl;
	b = (a - 32) * 5 / 9;
	b = int(b * 100);
	c = int(b) % 10;
	if (c >= 5)
		b = b + 1;
	b = double(b) / 100;
	cout << "���϶�Ϊ" << b << "��" << endl;
}