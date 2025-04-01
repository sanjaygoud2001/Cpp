// Created by Sanjay mattapalli on march 21st, 2025

/*
Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.
In this example, Derived class is inheriting from Base1 and Base2 classes.
*/

#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 class constructor" << endl;
    }
    ~Base1() {
        cout << "Base1 class destructor" << endl;
    }
    void display(){
        cout << "Base1 class display function" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 class constructor" << endl;
    }
    ~Base2() {
        cout << "Base2 class destructor" << endl;
    }
    void print(){
        cout << "Base2 class print function" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Derived class constructor" << endl;
    }
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
    void show(){
        cout << "Derived class show function" << endl;
    }
};

int main() {
    std::cout << "Hello this is example of Multiple Inheritance" << std::endl;
    Base1 b1;
    b1.display();
    Base2 b2;
    b2.print();
    Derived d;
    d.display();
    d.print();
    d.show();
    return 0;
}