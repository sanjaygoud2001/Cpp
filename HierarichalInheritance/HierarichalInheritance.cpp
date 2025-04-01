// Created by Sanjay mattapalli on march 21st, 2025

/*
Hierarichal Inheritance is a type of inheritance in which more than one derived classes are created from a single base class.
In this example, Derived1 and Derived2 classes are inheriting from Base class.
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

class Derived1 : public Base {
public:
    Derived1() {
        cout << "Derived1 class constructor" << endl;
    }
    ~Derived1() {
        cout << "Derived1 class destructor" << endl;
    }
    void show() {
        cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2() {
        cout << "Derived2 class constructor" << endl;
    }
    ~Derived2() {
        cout << "Derived2 class destructor" << endl;
    }
    void print() {
        cout << "Derived2 class print function" << endl;
    }
};

int main() {
    std::cout << "Hello this is example of Hierarichal Inheritance" << std::endl;
    Base b;
    b.display();
    cout << "---------------------------------" << endl;
    Derived1 d1;
    d1.display();
    d1.show();
    cout << "---------------------------------" << endl;
    Derived2 d2;
    d2.display();
    d2.print();
    cout << "---------------------------------" << endl;
    return 0;
}