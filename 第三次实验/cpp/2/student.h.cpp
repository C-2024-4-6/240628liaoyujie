#pragma once
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	Student(int n, const char* a,char s);
	Student();
	void display();
	void Set_value();
private:
	int num;
	char name[20] = { NULL };
	char sex;
};