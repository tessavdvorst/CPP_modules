/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:30:38 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/26 15:02:20 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

std::string copyTypeCheck(std::string s_original, std::string s_copy)
{
    if (s_original == s_copy)
        return ("SHALLOW");
    return ("DEEP");
}

int main()
{
    std::cout << "================CREATION=================\n";
    // const AAnimal animal; //-----> not allowed!
    // const AAnimal* animal = new Animal; //-----> not allowed!
    const AAnimal* aDog = new Dog();
    std::cout << "*\n";
    const AAnimal* aCat = new Cat();
    std::cout << "*\n";
    const Cat* cat = new Cat();
    std::cout << "*\n";
    const WrongCat* wrongCat = new WrongCat();
    std::cout << "\n";

    std::cout << " -------------------------------- \n";
    std::cout << "|     ARRAY OF OBJECT TEST       |\n";
    std::cout << " -------------------------------- \n\n";
    
    std::cout << "=============CREATION HORDE==============\n";
    int size = 4;
    const AAnimal* animalHorde[size];
    for (int i = 0; i < size; i++)
    {
        if (i < 2)
            animalHorde[i] = new Dog();
        else
            animalHorde[i] = new Cat();
        if (i != size - 1)
            std::cout << "*\n";
    }
    std::cout << "\n";

    // system ("leaks ex01");
    
    std::cout << "=============CHECK HORDE==============\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << i + 1 << ". " << animalHorde[i]->getType() << " says ";
        animalHorde[i]->makeSound();
    }
    std::cout << "\n";

        std::cout << "===========DESTRUCTION HORDE============\n";
    for (int i = 0; i < size; i++)
    {
        delete animalHorde[i];
        if (i != size - 1)
            std::cout << "*\n";       
    }
    std::cout << "\n";

    // system ("leaks ex01");

    std::cout << " -------------------------------- \n";
    std::cout << "|     DEEP/SHALLOW COPY TEST     |\n";
    std::cout << " -------------------------------- \n\n";
    
    std::cout << "===============ADD IDEAS================\n";
    cat->getBrain()->setIdea("I am a cat", 0);
    std::cout << "Cat thinks \"" << cat->getBrain()->getIdea(0) << "\"\n";
    std::cout << "*\n";
    wrongCat->getBrain()->setIdea("I am a wrong cat", 0);
    std::cout << "Wrong cat thinks \"" << wrongCat->getBrain()->getIdea(0) << "\"\n";
    std::cout << "\n";
   
    std::cout << "==============CREATE COPY===============\n";
    const Cat* catCopy = new Cat(*cat);
    std::cout << "*\n";
    const WrongCat* wrongCatCopy = new WrongCat(*wrongCat);
    std::cout << "\n";
    
    std::cout << "=============CHECK ADDRESS==============\n";
    std::cout << "Address Cat Brain = " << cat->getBrain() << "\n";
    std::cout << "Address Cat copy Brain = " << catCopy->getBrain() << "\n";
    std::cout << "*\n";
    std::cout << "Address Wrong cat Brain = " << wrongCat->getBrain() << "\n";
    std::cout << "Address Wrong cat copy Brain = " << wrongCatCopy->getBrain() << "\n";
    std::cout << "\n";

    std::cout << "==========BEFORE CHANGE IDEAS===========\n";
    std::cout << "Cat thinks \"" << cat->getBrain()->getIdea(0) << "\"\n";
    std::cout << "Cat copy thinks \"" << catCopy->getBrain()->getIdea(0) << "\"\n";
    std::cout << "*\n";
    std::cout << "Wrong cat thinks \"" << wrongCat->getBrain()->getIdea(0) << "\"\n";
    std::cout << "Wrong cat copy thinks \"" << wrongCatCopy->getBrain()->getIdea(0) << "\"\n";
    std::cout << "\n";
    
    //change idea
    catCopy->getBrain()->setIdea("I am a cat, meow!", 0);
    wrongCatCopy->getBrain()->setIdea("I am a cat, meow!", 0);
    
    std::cout << "==========AFTER CHANGE IDEAS============\n";
    std::cout << "Cat thinks \"" << cat->getBrain()->getIdea(0) << "\"\n";
    std::cout << "Cat copy thinks \"" << catCopy->getBrain()->getIdea(0) << "\"\n";
    std::cout << "-----> This is a " << copyTypeCheck(cat->getBrain()->getIdea(0), catCopy->getBrain()->getIdea(0)) << " copy\n";
    std::cout << "*\n";
    std::cout << "Wrong cat thinks \"" << wrongCat->getBrain()->getIdea(0) << "\"\n";
    std::cout << "Wrong cat copy thinks \"" << wrongCatCopy->getBrain()->getIdea(0) << "\"\n";
    std::cout << "-----> This is a " << copyTypeCheck(wrongCat->getBrain()->getIdea(0), wrongCatCopy->getBrain()->getIdea(0)) << " copy\n";
    std::cout << "\n";

    // system ("leaks ex01");
    
    std::cout << "==============DESTRUCTION===============\n";
    delete aDog;
    std::cout << "*\n";
    delete aCat;
    std::cout << "*\n";
    delete cat;
    std::cout << "*\n";
    delete wrongCat;
    std::cout << "\n";
    
    // system ("leaks ex01");
    return 0;
}