/* ****************************************************************
 * @author: Jephthah Orobia
 * @app name: AMAOEd-Week11-Lab10
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "dog.h"

using namespace std;

int main()
{
  Dog dogs[] = {
    Dog("Bethoveen", "Golden Retriever", DogSize::ExtraBig),
    Dog("Max", "Siberian Husky", DogSize::Small, false),
    Dog("Krypton", "Labrador Retriever", true),
    Dog("Lassie", "Rough Collie", DogSize::Big, true),
    Dog("Toto", "Cairn Terrier", DogSize::Small, false),
    Dog("Hachiko", "Akita"),
    Dog("Scooby-Doo", "Great Dane", DogSize::ExtraBig, false)
  };

  for(const Dog& dog : dogs){
    cout << dog.getName() << " is a ";
    if(!dog.isRegistered())
      cout << "un";
    cout << "registered " << dog.getStringSize() << " " << dog.getBreed() << " dog." << endl;
  }

  cout << endl << "*** Unregistering all dogs***" << endl;
  for(Dog& dog : dogs){
    dog.setIsRegistered(false);
  }
  
  cout << endl;

  for(Dog& dog : dogs){
    cout << dog.getName() << " is a ";
    if(!dog.isRegistered())
      cout << "un";
    cout << "registered " << dog.getStringSize() << " " << dog.getBreed() << " dog." << endl;
  }

  cout << endl << "*** registering all dogs and setting breed to `Askal` ***" << endl;
  for(Dog& dog : dogs){
    dog.setIsRegistered(true);
    dog.setBreed("Askal");
  }

  cout << endl;

  for(const Dog& dog : dogs){
    cout << dog.getName() << " is a ";
    if(!dog.isRegistered())
      cout << "un";
    cout << "registered " << dog.getStringSize() << " " << dog.getBreed() << " dog." << endl;
  }

  cout << endl;
  _pause();
  return EXIT_SUCCESS;
}
