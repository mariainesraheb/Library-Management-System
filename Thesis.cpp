#include "Thesis.h"
#include <iostream>
using namespace std;

Thesis::Thesis(int id, const string& title, const string& author, int year, const string& supervisor)
    : Resource(id, title, author, year), supervisor(supervisor) {}

void Thesis::display() const {
    cout << "Thesis [" << id << "]\n"
         << "Title: " << title << "\n"
         << "Author: " << author << "\n"
         << "Publication Year: " << publicationYear << "\n"
         << "Supervisor: " << supervisor << "\n"
         << "Status: " << (available ? "Available" : "Borrowed") << "\n";
}

string Thesis::getType() const {
    return "Thesis";
}

string Thesis::getSupervisor() const {
    return supervisor;
}

void Thesis::setSupervisor(const string& newSupervisor) {
    supervisor = newSupervisor;
}
