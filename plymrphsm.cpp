#include <iostream>
using namespace std;

// Base class
class Animal
{

public:
    void animalSound()
    {
        cout << "Animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal
{

public:
    void animalSound()
    {
        cout << "Pig makes a sound \n";
    }
};

// Derived class
class Dog : public Animal
{

public:
    void animalSound()
    {
        cout << "Dog makes a sound \n";
    }
};

int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}