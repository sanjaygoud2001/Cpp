#include <iostream>
using namespace std;

class Vehicle {
    public:
        virtual void Engine() = 0;
};

class Baleno : public Vehicle {
    public:
        void Engine() override{
            cout << "Baleno Engine" << endl;
        }
};

class Swift : public Vehicle {
    public:
        void Engine() override{
            cout << "Swift Engine" << endl;
        }
};

class Tigor : public Vehicle {
    public:
        void Engine() override{
            cout << "Tigor Engine" << endl;
        }
};

class polo : public Vehicle {
    public:
        void Engine() override{
            cout << "polo Engine" << endl;
        }
};

int main() {
    std::cout << "Example of an Interface Class" << std::endl;
    Vehicle *v;
    Baleno b;
    Swift s;
    Tigor t;
    polo p;
    v = &b;
    v->Engine();
    v = &s;
    v->Engine();
    v = &t;
    v->Engine();
    v = &p;
    v->Engine();
    return 0;
}