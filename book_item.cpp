#include <iostream>
#include <string>
#include "book_item.h"

class LibraryItem {
private:
    std::string title;
    bool isAvailable;

public:
    LibraryItem(const std::string& title, bool isAvailable = true): title(title), isAvailable(isAvailable) {}

    void printDetails() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << std::endl;
    }

    double calculateLateFees(int daysOverdue){};
};

class BookItem : public LibraryItem {
private:
    std::string author;
    std::string isbn;
    static constexpr double lateFeePerDay = 0.50;

public:
    BookItem(const std::string& title, const std::string& author, const std::string& isbn)
        : LibraryItem(title), author(author), isbn(isbn) {}

    void printDetails() {
        LibraryItem::printDetails();
        std::cout << "Author: " << author << std::endl;
        std::cout << "ISBN: " << isbn << std::endl;
    }

    double calculateLateFees(int daysOverdue) {
        return daysOverdue * lateFeePerDay;
    }
};