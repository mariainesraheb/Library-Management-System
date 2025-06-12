#ifndef ARTICLE_H
#define ARTICLE_H

#include "Resource.h"
#include <string>
using namespace std;

class Article : public Resource {
private:
    string journalName;

public:
    Article(int id, const string& title, const string& author, int year, const string& journal);

    void display() const override;
    string getType() const override;

    string getJournalName() const;
    void setJournalName(const string& newJournal);
};

#endif
