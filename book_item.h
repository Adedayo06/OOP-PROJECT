#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H
#include "library_item.h"
#include <string>

class BookItem : public LibraryItem {
private:
    std::string title;
    std::string author; // The author of the book
    std::string isbn;   // The ISBN of the book

public:
    // Constructor
    BookItem(const std::string& title, const std::string& author, const std::string& isbn);

    // Getters
    std::string getAuthor() const{};
    std::string getISBN() const{};

    // Setters
    void setAuthor(const std::string& author){};
    void setISBN(const std::string& isbn){};

    // Methods
    void printDetails() const{};              // Print details of the book
    int calculateLateFees(int daysOverdue) const{}; // Calculate the late fees based on overdue days
};

#endif // BOOK_ITEM_H
