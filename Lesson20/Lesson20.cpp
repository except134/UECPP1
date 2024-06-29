#include <iostream>

struct Student
{
    int Age;
    int Height;
    std::string Name;

    void GetInfo()
    {
        std::cout << "student struct";
    }
};

int main()
{
    Student* ptr = new Student{33, 180, "Ivan"};
    ptr->GetInfo();
}

