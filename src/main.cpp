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

  for(Dog dog : dogs){
    cout << dog.getName() << " is a ";
    if(!dog.isRegistered())
      cout << "un";
    cout << "registered " << dog.getStringSize() << " " << dog.getBreed() << " dog." << endl;
  }

  _pause();
  return EXIT_SUCCESS;
}
