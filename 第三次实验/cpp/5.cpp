#include<iostream>
using namespace std;

class Point
{
private:
	int x; 
	int y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void SetPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point a(60, 80);
	int i, j;
	cin >> i >> j;
	a.SetPoint(i, j);
	a.display();
}