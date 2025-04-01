// Created by Sanjay mattapalli on march 21st, 2025

/*
Method Overriding is a feature of C++ where a derived class can provide its own implementation of a function that is already declared in its base class.
In this example, class B is inheriting from class A and overriding the show function of class A.

If the show function is not overridden in class B, the show function of class A will be called. 
Since the show function in class A is declared as virtual, calling it through a base class pointer or reference will invoke the derived class's implementation, if available.
*/

#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "This is constructor of class A" << endl;
    }
    ~A() {
        cout << "This is destructor of class A" << endl;
    }
    virtual void show() {
        cout << "This is show function of class A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "This is constructor of class B" << endl;
    }
    ~B() {
        cout << "This is destructor of class B" << endl;
    }
    void show() override{
        cout << "This is show function of class B" << endl;
    }
};


int main() {
    std::cout << "Hello this is example of Method Overriding" << std::endl;
    B b;
    b.show();
    return 0;
}