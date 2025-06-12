#include "Resource.h"

Resource::Resource(int id, const string& title, const string& author, int year)
    : id(id), title(title), author(author), publicationYear(year), available(true) {}

Resource::~Resource() {}

int Resource::getId() const {
    return id;
}

bool Resource::isAvailable() const {
    return available;
}

void Resource::setAvailability(bool status) {
    available = status;
}
