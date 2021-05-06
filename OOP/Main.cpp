#include "Animal.h"
#include <iostream>
using namespace std;

int main() {
	Animal animal;
	animal.Speak();
	animal.SetLifespan(21);


	Animal* pAnimal = &animal;
	pAnimal->GetLifespan();
	//(*pAnimal).GetLifespan();
}