// Main.cpp
#include "Library.h"

int main() {
    Library library;

    // Create authors
    Author author1("John Doe", "USA");
    Author author2("Jane Smith", "UK");

    // Create books
    Book book1("Introduction to C++", "John Doe", 2022);
    Book book2("Advanced C++ Programming", "Jane Smith", 2023);

    // Add authors and books to the library
    library.addAuthor(author1);
    library.addAuthor(author2);
    library.addBook(book1);
    library.addBook(book2);

    // Display library information
    library.displayAuthors();
    library.displayBooks();

    return 0;
}
