#include "LibrarySystem.h"
#include <iostream>
using namespace std;

shared_ptr<Resource> LibrarySystem::findResourceById(int id) {
    for (auto& resource : resources) {
        if (resource->getId() == id) return resource;
    }
    return nullptr;
}

User* LibrarySystem::findUserById(int id) {
    for (auto& user : users) {
        if (user.getId() == id) return &user;
    }
    return nullptr;
}

void LibrarySystem::addResource(shared_ptr<Resource> resource) {
    resources.push_back(resource);
}

void LibrarySystem::addUser(const User& user) {
    users.push_back(user);
}

void LibrarySystem::borrowResource(int userId, int resourceId) {
    shared_ptr<Resource> resource = findResourceById(resourceId);
    User* user = findUserById(userId);

    if (resource && user && resource->isAvailable()) {
        resource->setAvailability(false);
        user->borrowResource(resourceId);
        Notification("Resource borrowed successfully.").send();
    } else {
        Notification("Borrowing failed.").send();
    }
}

void LibrarySystem::returnResource(int userId, int resourceId) {
    shared_ptr<Resource> resource = findResourceById(resourceId);
    User* user = findUserById(userId);

    if (resource && user && user->hasBorrowed(resourceId)) {
        resource->setAvailability(true);
        user->returnResource(resourceId);
        Notification("Resource returned successfully.").send();
    } else {
        Notification("Returning failed.").send();
    }
}

void LibrarySystem::displayAllResources() const {
    for (const auto& resource : resources) {
        resource->display();
        cout << "------------------------\n";
    }
}

void LibrarySystem::displayAllUsers() const {
    for (const auto& user : users) {
        cout << "User ID: " << user.getId() << " | Name: " << user.getName() << endl;
        user.displayBorrowedResources();
        cout << "------------------------\n";
    }
}
