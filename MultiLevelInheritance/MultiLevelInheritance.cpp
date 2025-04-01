// Created by Sanjay mattapalli on march 18th, 2025

/*
multi-level inheritance is a type of inheritance in which a class inherits from another class which is also inherited from another class.
In this example, Derived class is inheriting from Base2 class and Base2 class is inheriting from Base1 class.
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

class Base2 : public Base1 {
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

class Derived : public Base2 {
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
    cout << "Hello this is example of Multi Level Inheritance" << endl;
    Base1 b1;
    b1.display();
    cout << "---------------------------------" << endl;
    Base2 b2;
    b2.display();
    b2.print();
    cout << "---------------------------------" << endl;
    Derived d;
    d.show();
    d.display();
    d.print();
    cout << "---------------------------------" << endl;
    return 0;
}