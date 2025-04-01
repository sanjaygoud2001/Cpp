// Created by Sanjay mattapalli on march 21st, 2025

/*
    Encapsulation:
    - Encapsulation is the process of wrapping the data (variables) and code acting on the data (methods) together as a single unit.
    - Encapsulation is used to hide the values or state of a structured data object inside a class, preventing unauthorized parties' direct access to them.
    - Encapsulation is used to restrict access to the variables and methods of the class.
*/

#include <iostream>
using namespace std;

class Base {
    private:
        int x;
    protected:
        void show() {
            cout << "Base class's show method" << endl;
        }
    public:
        void setX(int x) {
            this->x = x;
        }
        int getX() {
            return x;
        }
};
class Derived : public Base {
    public:
        void display() {
            cout << "Derived class's display method" << endl;
            show(); // accessing protected member of the base class
        }
};

int main() {
    std::cout << "Example of an Encapsulation" << std::endl;
    Base b;
    b.setX(10);
    cout << "X: " << b.getX() << endl;
    Derived d;
    d.display();
    d.setX(20);
    cout << "X: " << d.getX() << endl;
    return 0;
}