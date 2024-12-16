#include <iostream>
#include"student.h"            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    std::cout << "num：" << num << std::endl;
    std::cout << "name：" << name << std::endl;
    std::cout << "sex：" << sex << std::endl;
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