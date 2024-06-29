#include <iostream>

struct Student
{
    int Age;
    int Height;
    std::string Name;
};

int main()
{
    Student* ptr = new Student{33, 180, "Ivan"};
}

