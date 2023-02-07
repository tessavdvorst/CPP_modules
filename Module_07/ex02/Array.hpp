/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/05 16:52:40 by Tessa         #+#    #+#                 */
/*   Updated: 2023/02/07 15:45:21 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
    private:
        T* _arr;
        unsigned int _size;
    
    public:
        Array(): _arr(NULL), _size(0) {};
        Array(unsigned int n): _size(n) {
            this->_arr = new T[this->_size];
        };
        Array(const Array& other): _arr(NULL) {
            *this = other;
        };
        ~Array() {
            delete[] this->_arr;
        };

        Array& operator=(const Array& other) {
            if (&other == this)
                return (*this);
            if (this->_arr)
                delete[] this->_arr;
            this->_size = other._size;
            this->_arr = new T[other._size];
            for (int i = 0; i < static_cast<int>(this->_size); i++)
                this->_arr[i] = other._arr[i];
            return (*this);
        };
        
        T& operator[](int index) const {
            if (index < 0 || static_cast<unsigned int>(index) >= this->_size)
                throw std::out_of_range("Array index out of range");
            return (this->_arr[index]);
        };

        int size(void) const
        {
            return (this->_size);
        };
        
        T* getArr(void) const
        {
            return (this->_arr);
        };
};

template <typename T>
std::ostream& operator<<(std::ostream& output, const Array<T>& arr)
{
    for (int i = 0; i < arr.size(); i++)
        output << arr[i] << "\n";
    return (output);
}

#endif
