#include "Book.h"
#include <initializer_list>

class Library 
{
	Book* array;
	std::size_t size;
protected:
	friend std::ostream& operator<<(std::ostream& ostr, const Library& l);

public:
	Library();
	Library(std::initializer_list<Book> initlist);
	Library(const Library& orig);
	Library(Library&& orig);
	Library(std::size_t size);
	Library& operator=(const Library& right);
	Library& operator=(Library&& right);
	Book& operator[](std::size_t index);
	const Book& operator[](std::size_t index) const;
	std::size_t GetSize() const;
	~Library();
};