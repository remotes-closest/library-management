// Author.cpp
#include "Author.h"
#include <iostream>

Author::Author(const std::string& name, const std::string& country)
    : name(name), country(country) {}

void Author::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Country: " << country << std::endl;
}
