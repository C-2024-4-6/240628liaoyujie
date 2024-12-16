#pragma once
class Student              //类声明
{
public:                   //公用成员函数原型声明
	Student(int n, const char* a,char s);
	Student();
	void display();
	void Set_value();
private:
	int num;
	char name[20] = { NULL };
	char sex;
};