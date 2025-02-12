#include <string>
#include <iostream>
#include "Book.h"


Book::Book() : author("nieznany"), title("brak")  //Konstruktor bezparametrowy z domyœlnymi wartoœciami
{
	std::cout << "Book()" << std::endl;
}
Book::Book(const std::string& a, const std::string& t) //Konstruktor z l-refernecj¹ 
{
	author = a;
	title = t;
}
Book::Book(std::string&& a, std::string&& t) //Konstruktor z r-referencj¹
{
	author = std::move(a);
	title = std::move(t);
}
Book::Book(const Book& other) //Konstruktor kopiujacy
	: title(other.title), author(other.author)
{
	std::cout << "Konstruktor kopiujacy" << std::endl;
	author = other.author;
	title = other.title;
}
Book& Book::operator=(const Book& right) // kopiujacy operator przypisania
{
	std::cout << "operator=(const Book&)" << std::endl;
	Book tmp = right; 
	std::swap(author, tmp.author); 
	std::swap(title, tmp.title);
	return *this;
}
Book::Book(Book&& other) //Konstruktor przenosz¹cy
{
	std::cout << "Konstruktor przenoszacy" << std::endl;
	author = other.author;
	title = other.title;

	other.author.clear();
	other.title.clear();
}
Book& Book::operator=(Book&& right)
{
	std::cout << "operator=(Book&&)" << std::endl;
	std::swap(author, right.author);
	std::swap(title, right.title); 
	return *this;
}
std::string Book::GetAuthor() const
{
	return author;
}
void Book::SetAuthor(const std::string& a)
{
	author = a;
}
void Book::SetAuthor(std::string&& a)
{
	author = std::move(a);
}
std::string Book::GetTitle() const
{
	return title;
}
void Book::SetTitle(const std::string& t)
{
	title = t;
}
void Book::SetTitle(std::string&& t)
{
	title = std::move(t);
}
Book::~Book()
{
	
}

std::ostream& operator<<(std::ostream& ostr, const Book& b)
{
	ostr << "author: " << b.GetAuthor() << " and title: " << b.GetTitle() << std::endl;
	return ostr;
}
