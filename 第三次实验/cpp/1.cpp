#include<iostream>
using namespace std;
class Time             
{
private:              
	int hour;
	int minute;
	int sec;
public:
	void SetTime()
	{
		int h, m, s;
		cin >> h >> m >> s;
		hour = h >= 0 && h < 24 ? h : 0;
		minute = m >= 0 && m < 60 ? m : 0;
		sec = s >= 0 && s < 60 ? s : 0;
	}
	void ShowTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           
	t1.SetTime();
	t1.ShowTime();
	return 0;
}