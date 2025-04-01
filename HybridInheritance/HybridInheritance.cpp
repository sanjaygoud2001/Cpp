// Created by Sanjay mattapalli on march 21st, 2025

/*
Hybrid Inheritance is a type of inheritance in which a class is derived from more than one class and the derived class can be of any type like single, multiple, multilevel, hierarchical, etc.
In this example, Derived3 class is inheriting from Derived1 and Derived2 classes.
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

class Derived3 : public Derived1, public Derived2 {
public:
    Derived3() {
        cout << "Derived3 class constructor" << endl;
    }
    ~Derived3() {
        cout << "Derived3 class destructor" << endl;
    }
    void display() {
        cout << "Derived3 class display function" << endl;
    }
};

int main() {
    std::cout << "Hello this is example of Hybrid Inheritance" << std::endl;
    Base b;
    b.display();
    std::cout << "---------------------------------" << std::endl;
    Derived1 d1;
    d1.display();
    d1.show();
    std::cout << "---------------------------------" << std::endl;
    Derived2 d2;
    d2.display();
    d2.print();
    std::cout << "---------------------------------" << std::endl;
    Derived3 d3;
    d3.display();
    d3.print();
    d3.show();
    std::cout << "---------------------------------" << std::endl;
    return 0;
}