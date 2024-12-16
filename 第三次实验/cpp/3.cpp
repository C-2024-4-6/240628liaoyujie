#include<iostream>
using namespace std;

class Cuboid
{
private:
	int length;
	int width;
	int height;
public:
	Cuboid(int l, int w, int h)
	{
		length = l;
		width = w;
		height = h;
	}
	void Showvolume()
	{
		cout << "volume:" << length * width * height << endl;
	}
};
int main()
{
	int l1, w1, h1, l2, w2, h2, l3, w3, h3;
	cin >> l1 >> w1 >> h1;
	cin >> l2 >> w2 >> h2;
	cin >> l3 >> w3 >> h3;
	Cuboid c1(l1, w1, h1), c2(l2, w2, h2), c3(l3, w3, h3);
	c1.Showvolume();
	c2.Showvolume();
	c3.Showvolume();
}