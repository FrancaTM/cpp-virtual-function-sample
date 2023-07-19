#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
};

class Duck : public Animal
{
public:
    void makeSound() { cout << "Quack!" << endl; }
};

class Chicken : public Animal
{
public:
    void makeSound() { cout << "Cluck!" << endl; }
};

void sound(Animal *pointer)
{
    pointer->makeSound();
}

int main()
{
    Animal *pointer;
    Duck duck;
    Chicken chicken;

    pointer = &duck;
    sound(pointer);

    pointer = &chicken;
    sound(pointer);

    return 0;
}