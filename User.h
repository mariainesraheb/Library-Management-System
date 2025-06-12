#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Resource.h"
using namespace std;

class User {
private:
    int id;
    string name;
    vector<int> borrowedResourceIds;

public:
    User(int id, const string& name);

    void borrowResource(int resourceId);
    void returnResource(int resourceId);
    bool hasBorrowed(int resourceId) const;

    int getId() const;
    string getName() const;
    void displayBorrowedResources() const;
};

#endif // USER_H
