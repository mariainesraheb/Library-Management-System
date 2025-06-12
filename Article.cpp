#include "Article.h"
#include <iostream>
using namespace std;

Article::Article(int id, const string& title, const string& author, int year, const string& journal)
    : Resource(id, title, author, year), journalName(journal) {}

void Article::display() const {
    cout << "Article [" << id << "]\n"
         << "Title: " << title << "\n"
         << "Author: " << author << "\n"
         << "Publication Year: " << publicationYear << "\n"
         << "Journal: " << journalName << "\n"
         << "Status: " << (available ? "Available" : "Borrowed") << "\n";
}

string Article::getType() const {
    return "Article";
}

string Article::getJournalName() const {
    return journalName;
}

void Article::setJournalName(const string& newJournal) {
    journalName = newJournal;
}
