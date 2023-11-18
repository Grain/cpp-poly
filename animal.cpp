#include <iostream>
#include <vector>

using namespace std;

class Animal
{
public:
    virtual void move()
    {
        cout << "Moving..." << endl;
    }
};

class Dog : public Animal
{
public:
    void move() override
    {
        cout << "Walking..." << endl;
    }

};

class Bird : public Animal
{
public:
    void move() override
    {
        cout << "Flying..." << endl;
    }
};

int main()
{
    Animal* animalPtr = new Animal();
    Dog* dogPtr = new Dog();
    Bird* birdPtr = new Bird();

    vector<Animal*> pets;
    pets.push_back(animalPtr);
    pets.push_back(dogPtr);
    pets.push_back(birdPtr);

    for (Animal* pet : pets)
        pet->move();

    return 0;
}
