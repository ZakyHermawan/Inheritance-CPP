#include <iostream>

class Base
{
private:
  int m_id;

public:
  Base(int id)
    : m_id{ id }
  {
    std::cout << "Base constructor being called" << std::endl;
  }
};

class Derived : public Base
{
private:
  int m_cost;

public:
  Derived(int id, int cost)
    :Base{ id }, m_cost{ cost }
  {
    std::cout << "Derived constructor being called" << std::endl;
  }
};

int main() {
  Derived d{ 1, 2 };

  return 0;
}