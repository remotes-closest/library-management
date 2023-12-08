// Book.cpp
#include "Book.h"
#include <iostream>

Book::Book(const std::string& title, const std::string& author, int year)
    : title(title), author(author), year(year) {}

void Book::displayInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Year: " << year << std::endl;
}
