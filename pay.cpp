//pay.cpp
#include <iostream>
#include "person.cpp"
#include <fstream>
#include "person.h"
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstring>

using namespace std;




void readData(Person employee[], int &size)
{
  string fname;
  string lname;
  double hoursWorked;
  double payRate;
  ifstream input;
  input.open("input.txt");

  while (input>>fname >>lname >>hoursWorked >> payRate)
  {
    Person p;
    p.setFirstName(fname);
    p.setLastName(lname);
    p.setHoursWorked(hoursWorked);
    p.setPayRate(payRate);
    employee[size]=p;
    size++;

  }
  input.close();

}

void writeData(Person employee[], int size)
{
  ofstream output;
  output << setprecision(2) << fixed;
  output.open("output.txt");
  for (int i = 0; i < size; i++)
    {
      output << employee[i].fullName() << " " << employee[i].totalPay() << endl;
    }
  output.close();
}

int main ()
{
int size = 0;
Person employee[20];
readData(employee, size);
writeData(employee, size);




  return 0;
}
