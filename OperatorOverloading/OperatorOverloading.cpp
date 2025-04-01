// Created by Sanjay mattapalli on march 21st, 2025

/*
    Operator Overloading:
    - Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type.
    - Operator overloading is used to overload or redefines most of the operators available in C++.
    - When an operator is overloaded, it is redefined to work with user-defined data types.
    - To overload an operator, we need to define a function that will be invoked when the operator is used.
    - The operator overloading function must be a member function of the class
*/

#include <iostream>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int x = 0, int y = 0) : x(x), y(y) {}
        Point operator+(Point const &obj) {
            Point res;
            res.x = x + obj.x;
            res.y = y + obj.y;
            return res;
            // return Point(x + obj.x, y + obj.y);  // Another way to return
        }
        void print() {
            cout << "x: " << x << " y: " << y << endl;
        }
};

int main() {
    std::cout << "Operator Overloading" << std::endl;
    Point p1(10, 20), p2(5, 10);
    Point p3 = p1 + p2;
    p3.print();
    return 0;
}