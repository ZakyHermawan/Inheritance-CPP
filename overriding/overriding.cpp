#include <iostream>

class Base
{
public:
    Base() {
        std::cout << "I'm base class" << std::endl;
    }
    void BaseOrigin() {
        std::cout << "I'm origin of the base" << std::endl;
    }

    void Overrided() {
        std::cout << "i will be overrided" << std::endl;
    }

};

class Derived : public Base
{
public:
    Derived() {
        std::cout << "I'm derived class" << std::endl;
    }
    void Overrided() {
        Base::Overrided();
        std::cout << "I'm overriding" << std::endl;
    }
    void DerivedOrigin() {
        std::cout << "I'm origin of derived class" << std::endl;
    }
};

int main() {
    Derived d;
    d.BaseOrigin();
    d.DerivedOrigin();
    d.Overrided();

    return 0;
}