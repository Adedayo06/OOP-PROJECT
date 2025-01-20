#ifndef PATRON_H
#define PATRON_H
#include <string>


class Patron {
private:
    std::string name;
    std::string libraryCardNumber;
    std::string contactInfo;

public:
    Patron(const std::string& name, const std::string& libraryCardNumber,const std::string& contactInfo): name(name),libraryCardNumber(libraryCardNumber),contactInfo(contactInfo){};
    void getName() const;
    void getLibraryCardNumber() const;
    void setName(const std::string& newName){};
    void setLibraryCardNumber(const std::string& newCardNumber){};
    void updateContactInfo(const std::string& newContactInfo){};
    bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const{};
};

#endif // PATRON_H
