// Library.cpp
#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::displayBooks() const {
    std::cout << "Books in the library:" << std::endl;
    for (const auto& book : books) {
        book.displayInfo();
        std::cout << std::endl;
    }
}

void Library::addAuthor(const Author& author) {
    authors.push_back(author);
}

void Library::displayAuthors() const {
    std::cout << "Authors in the library:" << std::endl;
    for (const auto& author : authors) {
        author.displayInfo();
        std::cout << std::endl;
    }
}
