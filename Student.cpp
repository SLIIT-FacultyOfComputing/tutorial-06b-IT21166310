#include "Student.h"
#include <iostream>

// Assign studentId and name
void Student::assignDetails(int id,char n) {
   studentId=id;
   name=n;
}

// Display StudentId and Name
int Student::display() {
  return studentId;
}
