#ifndef BOOK_H
#define BOOK_H

#include "Resource.h"

class Book : public Resource {
private:
    string genre;

public:
    Book(int id, const string& title, const string& author, int year, const string& genre);

    void display() const override;
    string getType() const override;
};

#endif // BOOK_H
