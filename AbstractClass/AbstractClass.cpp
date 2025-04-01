// Created by Sanjay mattapalli on march 21st, 2025

/*
    Abstraction:
    - Abstraction is the concept of hiding the internal details and showing only the necessary features of an object.
    - Abstraction is used to hide the internal functionality of the function and showing only the necessary features of the object.
    - Abstraction is achieved using abstract classes and interfaces.
    - An abstract class is a class that has at least one pure virtual function.
    - A pure virtual function is a function that has no definition in the base class and must be overridden in the derived class.
    - An abstract class cannot be instantiated, but it can be used as a base class.
    - An abstract class can have member variables, constructors, destructors, and member functions.
    - An abstract class can have member functions.
*/

#include<iostream>
using namespace std;

class AbstractClass {
    public:
        virtual void print() = 0;
        void display() {
            cout << "AbstractClass's Display method" << endl;
        }
};

class DerivedClass : public AbstractClass {
    public:
        void print() override {
            cout << "DerivedClass's Print method" << endl;
        }
};

int main() {
    std::cout << "Example of an Abstraction" << std::endl;
    DerivedClass d;
    d.print();
    d.display();
    return 0;
}