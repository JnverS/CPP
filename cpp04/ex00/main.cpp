#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "dog "<<j->getType() << " " << std::endl;
    std::cout << "cat "<<i->getType() << " " << std::endl;
    std::cout << "Animal "<<meta->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    std::cout << "=========================" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* badCat = new WrongCat();

    std::cout << wrongAnimal->getType() << std::endl;
    std::cout << badCat->getType() << std::endl;
    badCat->makeSound();
    wrongAnimal->makeSound();
    delete badCat;
    delete wrongAnimal;
    return 0;
}
