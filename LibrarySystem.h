#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H

#include <vector>
#include <memory>
#include "Resource.h"
#include "User.h"
#include "Notification.h"
using namespace std;

class LibrarySystem {
private:
    vector<shared_ptr<Resource>> resources;
    vector<User> users;

    shared_ptr<Resource> findResourceById(int id);
    User* findUserById(int id);

public:
    void addResource(shared_ptr<Resource> resource);
    void addUser(const User& user);

    void borrowResource(int userId, int resourceId);
    void returnResource(int userId, int resourceId);

    void displayAllResources() const;
    void displayAllUsers() const;
};

#endif // LIBRARYSYSTEM_H
