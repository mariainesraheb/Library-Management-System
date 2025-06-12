#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <string>
using namespace std;

class Notification {
private:
    string message;

public:
    Notification(const string& message);
    void send() const;
};

#endif // NOTIFICATION_H
