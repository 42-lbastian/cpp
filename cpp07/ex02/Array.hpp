#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"

template<typename T>
class Array
{
	public: 
		Array(void): _size(0)
		{
			std::cout << "Default Constructor Array" << std::endl;
			try
			{
				_array = new T[0]();
			}
			catch (std::exception&)
			{
				std::cout << "Default Constructor new fail" << std::endl;
			}
		}

		Array(unsigned int size): _size(size)
		{
			std::cout << "Arg Constructor Array" << std::endl;
			try
			{
				_array = new T[size]();
			}
			catch (std::exception&)
			{
				std::cout << "Arg Constructor new fail" << std::endl;
			}
		}

		Array(const Array<T>& array)
		{
			std::cout << "Copy Constructor Array" << std::endl;
			this->_array = NULL;
			(*this) = array;
		}

		~Array(void)
		{
			delete [] _array;
			std::cout << "Destructor Array" << std::endl;
		}

		Array<T>& operator=(const Array<T>& array)
		{
			std::cout << "Copy Operator Array" << std::endl;
			if (this != (&array))
			{
				this->_size = array._size;
				if (this->_array)
					delete [] this->_array;
				try
				{
					this->_array = new T[array._size];
					for (unsigned int i = 0; i < array._size; i++)
						this->_array[i] = array._array[i];
				}
				catch (std::exception&)
				{
					std::cout << "Error Copy Operator Array" << std::endl;
				}

			}
			return (*this);
		}

		T& operator[](unsigned int index)
		{
			if (index < 0 || index >= this->_size)
				throw std::exception();
			return (this->_array[index]);
		}

		unsigned int size(void)
		{
			return (_size);
		}

	private:
		unsigned int _size;
		T*           _array;

};

template<typename T>
std::ostream& operator<<(std::ostream& o, Array<T>& array)
{
	unsigned int size;

	size = array.size();
	for (unsigned int i = 0; i < size; i++)
		o << array[i] << " ";
	return (o);
}

#endif
