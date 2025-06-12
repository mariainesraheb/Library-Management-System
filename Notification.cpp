#include "Notification.h"
#include <iostream>
using namespace std;

Notification::Notification(const string& message) : message(message) {}

void Notification::send() const {
    cout << "Notification: " << message << endl;
}
