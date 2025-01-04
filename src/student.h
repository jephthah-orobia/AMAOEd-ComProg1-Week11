#include "person.h"

class Student : public Person {
private:
    std::string academic_program;
    unsigned short year;
    std::string university;

public:
    Student(std::string name, bool isMale, unsigned short age, std::string addr, std::string acadProg, unsigned short year, std::string university)
        : Person(name, isMale, age, addr, "Student"),
            academic_program(acadProg),
            year(year),
            university(university) {}
    
    std::string getAcademicProgram() const { return academic_program;}
    unsigned short getYear() const { return year;}
    std::string getUniversity() const { return university;}

    void setAcademicProgram(std::string ap) { academic_program = ap;}
    void setYear(unsigned short yr) { year = yr;}
    void setUniversity(std::string univ) { university = univ;}
};