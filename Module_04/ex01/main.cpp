/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:30:38 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 15:47:46 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// In your main function, create and fill an array of Animal objects. Half of it will
// be Dog objects and the other half will be Cat objects. At the end of your program
// execution, loop over this array and delete every Animal. You must delete directly dogs
// and cats as Animals. The appropriate destructors must be called in the expected order.

int main()
{
    std::cout << "==============CREATION===============\n";
    // const Animal* dog = new Dog();
    // const Animal* cat = new Cat();
    const Cat* cat = new Cat();
    const WrongCat* wrongCat = new WrongCat();
    std::cout << "\n";
    // std::cout << "===========CREATION HORDE============\n";
    // const Animal* animalHorde[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i < 5)
    //         animalHorde[i] = new Dog();
    //     else
    //         animalHorde[i] = new Cat();
    // }
    // std::cout << "\n";
    std::cout << "=============ADD IDEAS==============\n";
    cat->getBrain()->_ideas[0] = "I am a cat\n";
    wrongCat->getBrain()->_ideas[0] = "I am a cat\n";
    // std::string dogIdea = "I am a dog\n";
    std::cout << "\n";
    std::cout << "============CREATE COPY=============\n";
    const Cat* catCopy(cat);
    const WrongCat* wrongCatCopy(wrongCat);
    std::cout << "\n";
    std::cout << "===========CHANGE IDEAS=============\n";
    catCopy->getBrain()->_ideas[0] = "I am a cat, meow!\n";
    wrongCatCopy->getBrain()->_ideas[0] = "I am a cat, meow!\n";
    
    std::cout << "============DESTRUCTION=============\n";
    // delete dog;//should not create a leak
    delete cat;
    // std::cout << "=========DESTRUCTION HORDE==========\n";
    // for (int i = 0; i < 10; i++)
    //     delete animalHorde[i];
    return 0;
}