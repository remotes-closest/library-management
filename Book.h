// Book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& author, int year);

    void displayInfo() const;

private:
    std::string title;
    std::string author;
    int year;
};

#endif // BOOK_H
