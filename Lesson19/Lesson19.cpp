#include <iostream>

class Animal
{
public:
    Animal(const std::string& v)
    {
        voice = v;
    }

    virtual void Voice()
    {
        std::cout << voice << std::endl;
    }

protected:
    std::string voice{"Animal"};
};

class Dog : public Animal
{
public:
    Dog() : Animal("Woof!")
    {
    }
};

class Cat : public Animal
{
public:
    Cat() : Animal("Myau!")
    {
    }
};

class Cow : public Animal
{
public:
    Cow() : Animal("Muuuu!")
    {
    }
};

int main()
{
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for(auto i : animals) {
        i->Voice();
        delete i;
    }

}

