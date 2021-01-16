#include <iostream>

class Person
{
public:
  std::string m_name{};
  int m_age{};

  Person(const std::string& name="", int age=0)
    : m_name{ name }, m_age{ age }
  {

  }

  const std::string& getName() const { return m_name; }
  int getAge() const { return m_age; }

};


class baseballPlayer: public Person
{
private:
  int m_battingAvg{};
  int m_homeRuns{};

public:
  baseballPlayer(int battAvg = 0, int homeRun=0)
    : m_battingAvg{ battAvg }, m_homeRuns{ homeRun }
  {

  }
};

class Employee : public Person
{
private:
  double m_hourlySalary{};
  int m_employeeID{};

public:
  Employee(double hourlySalary, int employeeID)
    : m_hourlySalary{ hourlySalary }, m_employeeID{ employeeID }
  {

  }

  void printNumberandSalary() const {
    std::cout << m_name << ": " << m_hourlySalary << std::endl;
    return;
  }

};

int main()
{
  Employee frank{ 20.25, 12345 };
  frank.m_name = "Frank";

  frank.printNumberandSalary();


  return 0;
}