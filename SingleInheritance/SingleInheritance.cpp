// Created by Sanjay mattapalli on march 18th, 2025

/*
Single Inheritance is a type of inheritance in which a class inherits from only one class.
In this example, Derived class is inheriting from Base class.
*/

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }
    ~Base() {
        cout << "Base class destructor" << endl;
    }
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor" << endl;
    }
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
    void show() {
        cout << "Derived class show function" << endl;
    }
};


int main() {
    cout << "Hello this is example of Single Inheritance" << endl;
    Base b;
    b.display();
    cout << "---------------------------------" << endl;
    Derived d;
    d.show();
    d.display();
    cout << "---------------------------------" << endl;
    return 0;
}