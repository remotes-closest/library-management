// Library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Author.h"

class Library {
public:
    void addBook(const Book& book);
    void displayBooks() const;

    void addAuthor(const Author& author);
    void displayAuthors() const;

private:
    std::vector<Book> books;
    std::vector<Author> authors;
};

#endif // LIBRARY_H
