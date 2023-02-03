/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 14:30:51 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/02/03 15:39:53 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "serialize.hpp"

int main(void)
{
    // Data* dataOriginal = new Data;
    Data* dataOriginal = NULL;
    
    std::cout << "========BEFORE SERIALIZATION========\n";
    std::cout << "Address of Original DataPtr: " << dataOriginal << "\n";
    
    std::cout << "\n===========SERIALIZATION===========\n";
    uintptr_t i = serialize(dataOriginal);
    std::cout << "Address of uintPtr: " << i << "\n";

    std::cout << "\n========AFTER SERIALIZATION========\n";
    Data* dataNew = deserialize(i);
    std::cout << "Address of New DataPtr: " << dataNew << "\n";
    
    delete dataOriginal;
    return (0);
}
