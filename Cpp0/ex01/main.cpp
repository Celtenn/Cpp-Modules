#include "PhoneBook.hpp"
#include <iostream>

static std::string prompt(const std::string &field)
{
    std::string input;
    while (true) {
        std::cout << field << ": ";
        std::getline(std::cin, input);
        if (!input.empty())
            break;
        std::cout << "Field cannot be empty!" << std::endl;
    }
    return input;
}

int main()
{
    PhoneBook book;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            Contact c;
            c.setFirstName(prompt("First Name"));
            c.setLastName(prompt("Last Name"));
            c.setNickname(prompt("Nickname"));
            c.setPhoneNumber(prompt("Phone Number"));
            c.setDarkestSecret(prompt("Darkest Secret"));

            if (c.isValid())
                book.addContact(c);
        } else if (command == "SEARCH") {
            book.search();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Unknown command." << std::endl;
        }
    }

    return 0;
}
