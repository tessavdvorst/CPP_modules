/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:30:38 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/25 13:53:45 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "==============CREATION===============\n";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* l = new WrongCat();
    std::cout << "\n";
    std::cout << "================TYPE=================\n";
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    std::cout << "\n";
    std::cout << "============ANIMAL SOUND=============\n";
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    l->makeSound(); // WrongAnimal sound!
    std::cout << "\n";
    std::cout << "============DESTRUCTION=============\n";
    delete meta;
    delete j;
    delete i;
    delete l; // no WrongCat destructor called!
    return 0;
}