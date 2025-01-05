/* ****************************************************************
 * @author: Jephthah Orobia
 * @app name: AMAOEd-Week11-Lab10
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "student.h"

using namespace std;

int main()
{

  Student ben("Ben Aflick", true, 18, "Somewhere City", "BS Biology", 1, "UP Diliman");
  Student nick("Nick Ramsey", true, 19, "Chicago City", "BS Information Technology", 2, "University of Chicago");
  Student maria("Maria Clara", false, 20, "Makati City", "BSEd", 3, "University of Makati");
  Student juana("Juana Yan", false, 18, "Legazpi City", "BS Nursing", 1, "Bicol University");

  Student students[] = {ben, nick, maria, juana};

  for (Student &s : students)
  {
    cout << s.getName() << " is a " << s.getAge() << "-year old "
         << " " << s.getAcademicProgram() << " " << s.getGender() << " "
         << s.getOccupation() << " of " << s.getUniversity()
         << " who lives in " << s.getAddress() << "." << endl;
  }

  cout << endl
       << "*** Ben transfered to Makati City ***" << endl;
  ben.setAddress("Makati City");
  ben.setUniversity("Unvisersity of Makati");

  cout << endl
       << ben.getName() << " is a " << ben.getAge() << "-year old "
       << " " << ben.getAcademicProgram() << " " << ben.getGender() << " "
       << ben.getOccupation() << " of " << ben.getUniversity()
       << " who lives in " << ben.getAddress() << "." << endl;

  cout << endl
       << "*** Juana celebrated her birthday ***" << endl;
  juana.setAge(juana.getAge() + 1);

  cout << endl
       << juana.getName() << " is now " << juana.getAge() << " years old." << endl;
  cout << endl;
  _pause();
  return EXIT_SUCCESS;
}
