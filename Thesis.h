#ifndef THESIS_H
#define THESIS_H

#include "Resource.h"
#include <string>
using namespace std;

class Thesis : public Resource {
private:
    string supervisor;

public:
    Thesis(int id, const string& title, const string& author, int year, const string& supervisor);

    void display() const override;
    string getType() const override;

    string getSupervisor() const;
    void setSupervisor(const string& newSupervisor);
};

#endif
