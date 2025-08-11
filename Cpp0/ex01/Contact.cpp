#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {}

void Contact::setFirstName(const std::string &name) { firstName = name; }
void Contact::setLastName(const std::string &name) { lastName = name; }
void Contact::setNickname(const std::string &name) { nickname = name; }
void Contact::setPhoneNumber(const std::string &number) { phoneNumber = number; }
void Contact::setDarkestSecret(const std::string &secret) { darkestSecret = secret; }

bool Contact::isValid() const
{
    return !firstName.empty() && !lastName.empty() && !nickname.empty()
        && !phoneNumber.empty() && !darkestSecret.empty();
}

static std::string formatField(const std::string &field)
{
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}

void Contact::displaySummary(int index) const
{
    std::cout << std::setw(10) << index << "|"
              << std::setw(10) << formatField(firstName) << "|"
              << std::setw(10) << formatField(lastName) << "|"
              << std::setw(10) << formatField(nickname) << std::endl;
}

void Contact::displayFull() const
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
