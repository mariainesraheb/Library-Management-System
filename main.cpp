#include <iostream>
#include <memory>
#include "LibrarySystem.h"
#include "Book.h"
#include "Article.h"
#include "DigitalContent.h"
#include "Thesis.h"
using namespace std;

int main() {
    LibrarySystem library;

    // Adding Resources
    library.addResource(make_shared<Book>(1, "The Great Gatsby", "F. Scott Fitzgerald", 1925, "Novel"));
    library.addResource(make_shared<Article>(2, "Quantum Computing Advances", "Dr. Jane Doe", 2020, "Nature Journal"));
    library.addResource(make_shared<DigitalContent>(3, "Learn C++", "John Smith", 2021, "PDF"));
    library.addResource(make_shared<Thesis>(4, "AI in Healthcare", "Alice Johnson", 2022, "Prof. Roberts"));

    // Adding Users
    library.addUser(User(100, "Maria Ines"));
    library.addUser(User(101, "Elyas"));

    cout << "\n--- All Resources ---\n";
    library.displayAllResources();

    cout << "\n--- All Users ---\n";
    library.displayAllUsers();

    // Borrow Resource
    cout << "\n--- Borrowing Resource ---\n";
    library.borrowResource(100, 2); // Maria borrows Article with ID 2
    library.borrowResource(101, 3); // Elyas borrows Digital Content with ID 3

    cout << "\n--- Updated Resources ---\n";
    library.displayAllResources();

    cout << "\n--- Updated Users ---\n";
    library.displayAllUsers();

    // Return Resource
    cout << "\n--- Returning Resource ---\n";
    library.returnResource(100, 2); // Maria returns Article with ID 2

    cout << "\n--- Final Resources ---\n";
    library.displayAllResources();

    cout << "\n--- Final Users ---\n";
    library.displayAllUsers();

    return 0;
}
