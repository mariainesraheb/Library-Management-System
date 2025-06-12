#ifndef DIGITALCONTENT_H
#define DIGITALCONTENT_H

#include "Resource.h"
#include <string>
using namespace std;

class DigitalContent : public Resource {
private:
    string fileFormat;

public:
    DigitalContent(int id, const string& title, const string& author, int year, const string& format);

    void display() const override;
    string getType() const override;

    string getFileFormat() const;
    void setFileFormat(const string& newFormat);
};

#endif
