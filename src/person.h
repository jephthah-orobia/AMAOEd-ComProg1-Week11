#include <iostream>
#include <string>

class Person{
private:
    std::string name;
    bool isMale;
    unsigned short age;
    std::string address;
    std::string occupation;

public:
    Person(std::string name, bool is_male, unsigned short age, std::string address, std::string occupation)
        : name(name), isMale(is_male), age(age), address(address), occupation(occupation){};

    /* Getters */
    std::string getName(){ return name;}
    std::string getGender(){ if(isMale) return "Male"; else return "Female";}
    unsigned short getAge(){ return age;}
    std::string getAddress(){ return address;}
    std::string getOccupation(){ return occupation;}

    /* Setters */
    void setName(std::string n){ name = n;}
    void setGender(bool is_male){ isMale = is_male;}
    void setAge(unsigned short n){age = n;}
    void setAddress(std::string addr){address = addr;}
    void setOccupation(std::string occp){occupation = occp;}

    void displayInfo(){
        std::cout << name << " is a "<<age<<"-year old ";
        if(isMale) std::cout << "male";
        else std::cout << "female";
        std::cout << " who lives in " << address << " as a " << occupation << ".";
    }
};