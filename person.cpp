//person.cpp
//Matthew Garcia
//Section 2

#include "person.h"

Person::Person(string fName, string lName, float rate, float hours){
  firstName="";
  lastName="";
  payRate=0.0;
  hoursWorked=0.0;
}


string Person::getFirstName() {
    return firstName;
}

string Person:: getLastName() {
  return lastName;
}

void Person::setLastName(string lName){
  lastName=lName;
}

void Person:: setFirstName(string fName){
firstName=fName;
}


void Person:: setPayRate(float rate){
  payRate=rate;
}

float Person:: getPayRate(){
  return payRate;
}

void Person:: setHoursWorked(float hours){
  hoursWorked=hours;
}

float Person:: getHoursWorked(){
  return hoursWorked;
}

float Person:: totalPay(){

  return payRate * hoursWorked;
}

string Person:: fullName(){
  return (firstName + " " + lastName);
}
