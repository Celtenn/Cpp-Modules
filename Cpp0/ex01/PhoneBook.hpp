#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int count;
    int nextIndex;

public:
    PhoneBook();
    void addContact(const Contact &contact);
    void displayAllSummaries() const;
    void search() const;
};

#endif
