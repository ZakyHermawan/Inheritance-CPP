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

    friend std::ostream& operator<< (std::ostream& out, const base& b) {
        out << "In base output" << std::endl;
        return out;
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

    friend std::ostream& operator<< (std::ostream& out, const Derived& d) {
        out << "In derived" << std::endl;
        out << static_cast<const Base&>(d) << std::endl;
        return out;
    }

};

int main() {
    Derived d;
    d.BaseOrigin();
    d.DerivedOrigin();
    d.Overrided();
    std::cout << d << std::endl;

    return 0;
}