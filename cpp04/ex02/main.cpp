#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    std::cout << "========" << std::endl;

    Animal *cat = new Cat();
    cat->setIdea(1, "one");
    cat->setIdea(2, "two");
    cat->setIdea(3, "third");
    cat->setIdea(4, "four");
    std::cout << "Idea 1 " << cat->getIdea(1) << std:: endl;
    std::cout << "Idea 2 " << cat->getIdea(2) << std:: endl;
    std::cout << "Idea 3 " << cat->getIdea(3) << std:: endl;
    std::cout << "Idea 4 " << cat->getIdea(4) << std:: endl;
    delete cat;
    return 0;
}
