#include <string>
#include <iostream>
#include "Library.h"

Library::Library()
{
	std::cout << "Konstruktor bezparametrowy" << std::endl;
	size = 1;
	array = new Book[1];
}
Library::Library(std::initializer_list<Book> list)
	: size{ list.size() }, array{ new Book[list.size()] }
{
	std::cout << "Library(std::initializer_list)" << std::endl;
	std::size_t i = 0;
	for (Book b : list)
	{
		array[i] = b;
		i++;
	}
}
Library::Library(const Library& orig)
	: size{ orig.size }, array{ new Book[orig.size] }
{
	std::cout << "Library(const Library&)" << std::endl;
	for (std::size_t i = 0; i < size; i++)
		array[i] = orig.array[i];
}
Library::Library(Library&& orig) 
{
	std::cout << "Library(Library&&)" << std::endl;
	array = orig.array;
	size = orig.size;

	orig.array = nullptr;
	orig.size = 0;
}
Library::Library(std::size_t size)
	: size{ size }, array{ new Book[size] }
{
	std::cout << "Library(" << size << ")" << std::endl;
}
Library& Library::operator=(const Library& right)
{
	std::cout << "operator=(const Vector&)" << std::endl;
	Library tmp = right;
	std::swap(array, tmp.array);
	std::swap(size, tmp.size);
	return *this;
}
Library& Library::operator=(Library&& right)
{
	std::cout << "operator=(Library&&)" << std::endl;
	std::swap(array, right.array);
	std::swap(size, right.size);
	return *this;
}
Book& Library::operator[](std::size_t index)
{
	return array[index];
}
const Book& Library::operator[](std::size_t index) const
{
	return array[index];
}
std::size_t Library::GetSize() const
{
	return size;
}
std::ostream& operator<<(std::ostream& ostr, const Library& l)
{
	ostr << "Library{ ";
	for (std::size_t i = 0; i < l.GetSize(); i++)
	{
		if (i > 0)
			ostr << ";";
		ostr << l[i];
	}
	ostr << "}";
	return ostr;
}
Library::~Library()
{
	std::cout << "~Library()" << std::endl;
	if (array != nullptr)
	{
		std::cout << "Releasing memory " << array << std::endl;
		delete[] array;
	}
}