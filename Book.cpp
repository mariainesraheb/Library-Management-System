#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(int id, const string& title, const string& author, int year, const string& genre)
    : Resource(id, title, author, year), genre(genre) {}

void Book::display() const {
    cout << "Book [" << id << "]\n"
         << "Title: " << title << "\n"
         << "Author: " << author << "\n"
         << "Publication Year: " << publicationYear << "\n"
         << "Genre: " << genre << "\n"
         << "Status: " << (available ? "Available" : "Borrowed") << "\n";
}

string Book::getType() const {
    return "Book";
}
