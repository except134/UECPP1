#include <iostream>

struct Bag
{
    std::string books[10]{};
};

struct Student
{
    int Age = 0;
    int Height = 0;
    std::string Name = 0;
    Bag* myBag = nullptr;

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

