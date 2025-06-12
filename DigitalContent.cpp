#include "DigitalContent.h"
#include <iostream>
using namespace std;

DigitalContent::DigitalContent(int id, const string& title, const string& author, int year, const string& format)
    : Resource(id, title, author, year), fileFormat(format) {}

void DigitalContent::display() const {
    cout << "Digital Content [" << id << "]\n"
         << "Title: " << title << "\n"
         << "Author: " << author << "\n"
         << "Publication Year: " << publicationYear << "\n"
         << "File Format: " << fileFormat << "\n"
         << "Status: " << (available ? "Available" : "Borrowed") << "\n";
}

string DigitalContent::getType() const {
    return "DigitalContent";
}

string DigitalContent::getFileFormat() const {
    return fileFormat;
}

void DigitalContent::setFileFormat(const string& newFormat) {
    fileFormat = newFormat;
}
