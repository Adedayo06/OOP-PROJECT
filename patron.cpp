#include "patron.h"
#include <iostream>
#include <string>

// Constructor
Patron::Patron(const std::string& name, const std::string& libraryCardNumber,const std::string& contactInfo)
: name(name), libraryCardNumber(libraryCardNumber) {}

// Getters
void getName() {  }
void getLibraryCardNumber(){}

// Setters
void setContactInfo(const std::string& contactInfo) {} ;

// Additional Functions
void Patron::updateContactInfo(const std::string& newContactInfo) { setContactInfo(newContactInfo); }

bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
    return currentBorrowedCount < maxLimit;
}
