#include "person.h"

class Student : public Person
{
private:
    std::string academic_program;
    unsigned short year;
    std::string university;

public:
    Student(std::string name, bool isMale,
            unsigned short age, std::string addr,
            std::string acadProg, unsigned short year,
            std::string university)
        : Person(name, isMale, age, addr, "Student"),
          academic_program(acadProg),
          year(year),
          university(university) {}

    
    #pragma region Accessors
    //get Academic Program
    std::string getAcademicProgram() const { return academic_program; }

    //get College Year
    unsigned short getYear() const { return year; }

    //get University
    std::string getUniversity() const { return university; }
    #pragma endregion Accessors

    #pragma region Mutators
    //set Academic Program
    void setAcademicProgram(std::string ap) { academic_program = ap; }
    
    //set College Year
    void setYear(unsigned short yr) { year = yr; }

    //set University
    void setUniversity(std::string univ) { university = univ; }
    #pragma endregion Mutators
};