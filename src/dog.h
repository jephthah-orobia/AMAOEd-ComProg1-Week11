#include "legged-mammal.h"

enum class DogSize{
    ExtraSmall,
    Small,
    Medium,
    Big,
    ExtraBig
};

class Dog : public LeggedMammal{
private:
    std::string breed;
    bool is_registered = true;
    DogSize size = DogSize::Medium;

public:
    Dog(std::string name, std::string breed, DogSize size, bool isRegistered)
        : LeggedMammal(name, {FurTypes::GuardHairs, FurTypes::Underfur, FurTypes::Whiskers}),
            breed(breed),
            size(size),
            is_registered(isRegistered){};
    Dog(std::string name, std::string breed, bool isRegistered)
        : LeggedMammal(name, {FurTypes::GuardHairs, FurTypes::Underfur, FurTypes::Whiskers}),
            breed(breed),
            is_registered(isRegistered){};
    Dog(std::string name, std::string breed, DogSize size)
        : LeggedMammal(name, {FurTypes::GuardHairs, FurTypes::Underfur, FurTypes::Whiskers}),
            breed(breed),
            size(size){};
    Dog(std::string name, std::string breed)
        : LeggedMammal(name, {FurTypes::GuardHairs, FurTypes::Underfur, FurTypes::Whiskers}),
            breed(breed){};

    /* Accessors */
    std::string getBreed() const {return breed;}
    bool isRegistered() const {return is_registered;}
    DogSize getSize() const {return size;}
    std::string getStringSize() const {
        switch(size){
            case DogSize::ExtraSmall:
                return "Extra Small";
                break;
            case DogSize::Small:
                return "Small";
                break;
            case DogSize::Medium:
                return "Medium";
                break;
            case DogSize::Big:
                return "Big";
                break;
            case DogSize::ExtraBig:
                return "Extra Big";
                break;
            default:
                return "Unknown";
                break;
        }
    }

    /* Setters/Mutators */
    void setBreed(std::string b){this->breed = b;}
    void setIsRegistered(bool r){this->is_registered = r;}
    void setSize(DogSize ds){this->size = ds;}

};