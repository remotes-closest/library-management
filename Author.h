// Author.h
#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
public:
    Author(const std::string& name, const std::string& country);

    void displayInfo() const;

private:
    std::string name;
    std::string country;
};

#endif // AUTHOR_H
