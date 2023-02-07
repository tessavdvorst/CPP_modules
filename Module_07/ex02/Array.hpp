/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/05 16:52:40 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/05 17:13:08 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Construction with no parameter: Creates an empty array.
// • Construction with an unsigned int n as a parameter: Creates an array of n elements
// initialized by default.
// Tip: Try to compile int * a = new int(); then display *a.
// • Construction by copy and assignment operator. In both cases, modifying either the
// original array or its copy after copying musn’t affect the other array.
// • You MUST use the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden. Your program must never access nonallocated memory.
// • Elements can be accessed through the subscript operator: [ ].
// • When accessing an element with the [ ] operator, if its index is out of bounds, an
// std::exception is thrown.
// • A member function size() that returns the number of elements in the array. This
// member function takes no parameter and musn’t modify the current instance.

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
    private:
        T* _arr;
        int _size;
    
    public:
        Array(): _size(0) {
            this->_arr = new T[this->_size];
        };
        Array(unsigned int n): _size(n) {
            this->_arr = new T[this->_size];
        };
        Array(const Array& other) {
            *this = other;
        };
        ~Array() {
            delete this->_arr;
        };

        Array& operator=(const Array& other) {
            this->_size = other._size;
            this->_arr = other._arr;
            return (*this);
        };
        T& operator[](int index) {
            return (this->_arr[index]);
        };
};


#endif
