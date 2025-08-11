#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook() : count(0), nextIndex(0) {}

void PhoneBook::addContact(const Contact &contact) {
    contacts[nextIndex] = contact;
    nextIndex = (nextIndex + 1) % 8;
    if (count < 8)
        count++;
}

void PhoneBook::displayAllSummaries() const
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < count; i++) {
        contacts[i].displaySummary(i);
    }
}

void PhoneBook::search() const
{
    if (count == 0)
    {
        std::cout << "No contacts to display." << std::endl;
        return;
    }
    displayAllSummaries();
    std::cout << "Enter index (0-" << count - 1 << "): ";
    int index;
    std::cin >> index;
    if (std::cin.fail() || index < 0 || index >= count)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index." << std::endl;
        return;
    }
    contacts[index].displayFull();
}
