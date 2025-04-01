// Created by Sanjay mattapalli on march 21st, 2025

/*
    Virtual Destructor:
    - A virtual destructor is used to ensure that the destructor of the derived class is called when the base class pointer is deleted.
*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void MakeSound() = 0;
    Animal() {
        cout << "Animal Constructor" << endl;
    }
    virtual ~Animal() {
        cout << "Animal Destructor" << endl;
    }
};
class Dog : public Animal {
public:
    void MakeSound() override {
        cout << "Dog's bow bow...!" << endl;
    }
    Dog() {
        cout << "Dog Constructor" << endl;
    }
    ~Dog() {
        cout << "Dog Destructor" << endl;
    }
};
class Cat : public Animal {
public:
    void MakeSound() override {
        cout << "Cat's meow meow....!" << endl;
    }
    Cat() {
        cout << "Cat Constructor" << endl;
    }
    ~Cat() {
        cout << "Cat Destructor" << endl;
    }
};
int main() {
    std::cout << "Example of an Virtual Destructor" << std::endl;
    Animal *a = new Dog();
    a->MakeSound();
    delete a;   // This will call the destructor of the Dog class followed by the Animal class due to the virtual keyword
    Animal *b = new Cat();
    b->MakeSound();
    delete b;   // This will call the destructor of the CAt class followed by the Animal class due to the virtual keyword
    return 0;
}