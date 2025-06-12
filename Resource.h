#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>
using namespace std;

class Resource {
protected:
    int id;
    string title;
    string author;
    int publicationYear;
    bool available;

public:
    Resource(int id, const string& title, const string& author, int year);
    virtual ~Resource();

    virtual void display() const = 0;
    virtual string getType() const = 0;

    int getId() const;
    bool isAvailable() const;
    void setAvailability(bool status);
};

#endif // RESOURCE_H