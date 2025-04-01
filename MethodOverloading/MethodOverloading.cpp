// Created by Sanjay mattapalli on march 21st, 2025

/*
Method Overloading is a feature of C++ where two or more functions can have the same name but different parameters.
In this example, class A has two show functions with different parameters.
*/
#include <iostream>
using namespace std;

class A {
public:
    void show(int x) {
        cout << "Value of x is: " << x << endl;
    }
    void show(double y) {
        cout << "Value of y is: " << y << endl;
    }
};

int main() {
    std::cout << "Hello this is example of Method Overloading" << std::endl;
    A a;
    a.show(5);
    a.show(5.5);
    return 0;
}