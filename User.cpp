#include "User.h"
#include <iostream>
#include <algorithm>
using namespace std;

User::User(int id, const string& name) : id(id), name(name) {}

void User::borrowResource(int resourceId) {
    borrowedResourceIds.push_back(resourceId);
}

void User::returnResource(int resourceId) {
    borrowedResourceIds.erase(remove(borrowedResourceIds.begin(), borrowedResourceIds.end(), resourceId), borrowedResourceIds.end());
}

bool User::hasBorrowed(int resourceId) const {
    return find(borrowedResourceIds.begin(), borrowedResourceIds.end(), resourceId) != borrowedResourceIds.end();
}

int User::getId() const {
    return id;
}

string User::getName() const {
    return name;
}

void User::displayBorrowedResources() const {
    cout << "User " << name << " has borrowed resources with IDs: ";
    for (int id : borrowedResourceIds) {
        cout << id << " ";
    }
    cout << endl;
}
