#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

enum class FurTypes
{
    GuardHairs,
    Underfur,
    Whiskers,
    Mane,
    Wool,
    SpinesOrQuills,
    BridlingHair
};

class LeggedMammal
{
private:
    std::string name;
    int num_legs = 4;
    std::vector<FurTypes> fur_types = {FurTypes::GuardHairs};
    bool has_tail = true;
    static const std::unordered_map<FurTypes, std::string> furTypeToStringMap;

public:
    // Constructor
    LeggedMammal(std::string mammal_name) : name(mammal_name) {}
    LeggedMammal(std::string mammal_name, int legs) : name(mammal_name), num_legs(legs) {}
    LeggedMammal(std::string mammal_name, bool has_tail)
        : name(mammal_name), has_tail(has_tail) {}
    LeggedMammal(std::string mammal_name, int legs, bool has_tail)
        : name(mammal_name), num_legs(legs), has_tail(has_tail) {}
    LeggedMammal(std::string mammal_name, int legs, std::vector<FurTypes> furs)
        : name(mammal_name), num_legs(legs), fur_types(furs) {}
    LeggedMammal(std::string mammal_name, std::vector<FurTypes> furs) : name(mammal_name), fur_types(furs){}
    LeggedMammal(std::string mammal_name, int legs, std::vector<FurTypes> furs, bool has_tail)
        : name(mammal_name), num_legs(legs), has_tail(has_tail), fur_types(furs) {}

    // Getter for name
    std::string getName() const { return name; }

    // Getter for number of legs
    int getNumLegs() const { return num_legs; }

    // Getter for has_tail
    bool hasTail() const { return has_tail; }

    // Getter for fur_type
    std::vector<FurTypes> getFurTypes() const { return fur_types; }
    
    // Setter for name
    void setName(std::string n){name =n;}

    // Setter for leg cout
    void setNumLegs(unsigned short l){num_legs=l;}
    
    // Setter for has_tail
    void setHasTail(bool hasTail){has_tail = hasTail;}

    // Setter for fur_type
    void setFurTypes(std::vector<FurTypes> ft){fur_types=ft;}

    // Method to display information
    void displayInfo() const
    {
        std::cout << "A " << name << " is a Legged Mammal with " << num_legs << " legs, ";
        if (has_tail)
            std::cout << "with";
        else
            std::cout << "without";
        std::cout << " a tail, and has ";

        if(fur_types.size() == 1){
            std::cout << furTypeToStringMap.at(fur_types.at(0)) << ".";
        } else {
            for (int i=0; i < fur_types.size(); i++)
            {
                if(i !=  fur_types.size() - 1)
                    std::cout << furTypeToStringMap.at(fur_types.at(i)) << ", ";
                else
                    std::cout << "and "<< furTypeToStringMap.at(fur_types.at(i)) << ".";
            }

        }

    }
};

// Initialize the map with string representations
const std::unordered_map<FurTypes, std::string>
    LeggedMammal::furTypeToStringMap = {
        {FurTypes::GuardHairs, "Guard Hairs"},
        {FurTypes::Underfur, "Underfur"},
        {FurTypes::Whiskers, "Whiskers"},
        {FurTypes::Mane, "Mane"},
        {FurTypes::Wool, "Wool"},
        {FurTypes::SpinesOrQuills, "Spines/Quills"},
        {FurTypes::BridlingHair, "Bridling Hair"}};