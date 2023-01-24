/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:29:38 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/01/24 17:05:22 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string.h>

// For every exercise, you have to provide the most complete tests you can.
// Constructors and destructors of each class must display specific messages. Don’t use the
// same message for all classes.
// Start by implementing a simple base class called Animal. It has one protected
// attribute:
// • std::string type;
// Implement a Dog class that inherits from Animal.
// Implement a Cat class that inherits from Animal.
// These two derived classes must set their type field depending on their name. Then,
// the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
// The type of the Animal class can be left empty or set to the value of your choice.
// Every animal must be able to use the member function:
// makeSound()
// It will print an appropriate sound (cats don’t bark).

// To ensure you understood how it works, implement a WrongCat class that inherits
// from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones
// in the code above, the WrongCat should output the WrongAnimal sound.
// Implement and turn in more tests than the ones given above.

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& animal);
        ~Animal();
        
        Animal& operator=(const Animal& animal);

        std::string getType(void) const;
        virtual void makeSound();
};

// std::ostream& operator<<(std::ostream& output, const Animal& animal);

#endif