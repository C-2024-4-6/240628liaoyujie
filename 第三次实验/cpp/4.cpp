#include<iostream>
using namespace std;

class Student
{
public:
	long int id;
	int grade;
	Student(long int i, int g)
	{
		id = i;
		grade = g;
	}
};
void max(Student* a)
{
	long int res;
	for (int i = 0; i < 4; i++)
	{
		res = a[i].grade > a[i + 1].grade ? a[i].id : a[i + 1].id;
	}
	cout << res << endl;
}
int main()
{
	Student A[5] = { Student(1,73),Student(2,81),Student(3,69),Student(4,96),Student(5,91) };
	Student* p = A;
	max(p);
}