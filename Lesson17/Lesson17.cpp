#include <iostream>

class Vector
{
public:
    Vector() { }
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) { }

    void Show()
    {
        std::cout << "\n" << x << ' ' << y << ' ' << z;
    }

    double Length()
    {
        return sqrt(x * x + y * y + z * z);
    }

private:
    double x = 0;
    double y = 0;
    double z = 0;
};

class MyClass
{
public:
    MyClass() : age(0), name("No name")
    {
    }

    MyClass(const std::string& n, int a) : age(a), name(n)
    {
    }

    void Print()
    {
        std::cout << "My name is " << name << ", my age " << age << std::endl; 
    }

private:
    std::string name{};
    int age{};
};

int main()
{
    Vector v(10, 10, 10);
    v.Show();
    std::cout << "\nVector length: " << v.Length() << std::endl;

    MyClass my("Nick", 46);
    my.Print();
}


