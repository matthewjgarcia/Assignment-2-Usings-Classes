//pay.cpp
// Matthew Garcia
// Section 2
#include <iostream>
#include "person.cpp"
#include <fstream>
#include "person.h"
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <vector>


using namespace std;




void readData(vector <Person> &employee)
{
  int i=0;
  string fName;
  string lName;
  float hours;
  float rate;
  ifstream input;
  input.open("input.txt");

  while (!input.eof())
  {
    employee.emplace_back(Person(fName, lName, rate, hours));
    input >> fName >> lName >> rate >> hours;
    employee.at(i).setFirstName(fName);
    employee.at(i).setLastName(lName);
    employee.at(i).setPayRate(rate);
    employee.at(i).setHoursWorked(hours);
    i++;

  }

  employee.pop_back();
  input.close();

}

void writeData(vector <Person> &employee)
{
  ofstream output;
  output << setprecision(2) << fixed;
  output.open("output.txt");
  for (int i = 0; i < employee.size(); i++)
    {
      output << employee.at(i).fullName() << " " << employee.at(i).totalPay() << endl;
    }
  output.close();
}

int main ()
{
vector <Person> employee;
readData(employee);
writeData(employee);
  return 0;
}
