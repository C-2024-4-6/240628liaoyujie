#include <iostream>
#include"student.h"            //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    std::cout << "num��" << num << std::endl;
    std::cout << "name��" << name << std::endl;
    std::cout << "sex��" << sex << std::endl;
}
Student::Student(int n, const char* a,char s)
{
    num = n;
    for (int i = 0; i < 20; i++)
    {
        name[i] = a[i];
    }
    sex = s;
}
Student::Student()
{
}
void Student::Set_value()
{
    char n;
    n = getchar();
    int i = 0;
    while (n != ' ')
    {
        name[i] = n;
        n = getchar();
        i++;
    }
    std::cin >> num;
    std::cin >> sex;
}