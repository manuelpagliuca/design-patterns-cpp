#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "NullAnimal.h"

void makeAnimalSound(const Animal& animal)
{
	animal.makeSound();
}

int main()
{
	Dog myDog;
	Cat myCat;

	makeAnimalSound(myDog);
	makeAnimalSound(myCat);

	NullAnimal nullAnimal;
	makeAnimalSound(nullAnimal);

	return 0;
}