#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() { cout << "Animal making noise..." << endl; }
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
    Animal animal;
    Duck duck;
    Chicken chicken;

    sound(&animal);
    sound(&duck);
    sound(&chicken);

    return 0;
}