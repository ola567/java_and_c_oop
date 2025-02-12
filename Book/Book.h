#include <iostream>
#pragma once

class Book
{
	std::string author, title;
	friend std::ostream& operator<<(std::ostream& ostr, const Book& b);

public:
	Book();
	Book(const std::string& a, const std::string& t);
	Book(std::string&& a, std::string&& t);
	Book(const Book& other);
	Book(Book&& other);
	
	Book& operator=(const Book& right);
	Book& operator=(Book&& right);

	std::string GetAuthor() const;
	std::string GetTitle() const;

	void SetAuthor(const std::string& a);
	void SetAuthor(std::string&& a);
	
	void SetTitle(const std::string& t);
	void SetTitle(std::string&& t);
	~Book();

};
