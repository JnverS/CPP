//
// Created by Kirth Dominick on 4/29/22.
//

#include <iomanip>
#include "PhoneBook.h"

PhoneBook::PhoneBook(void) : _index(0), _nbr_added(0){
    return;
}

int PhoneBook::AddContact(void) {
    std::string str;
    const int  index = this->_index;

    std::cout << "First name : ";
    std::cin >> str;
    this->_phonebook[index].setFirstName(str);
    std::cout << "Last name : ";
    std::cin >> str;
    this->_phonebook[index].setLastName(str);
    std::cout << "Nickname : ";
    std::cin >> str;
    this->_phonebook[index].setNickname(str);
    std::cout << "Phone number : ";
    std::cin >> str;
    this->_phonebook[index].setPhoneNumber(str);
    std::cout << "Darkest Secret : ";
    std::cin >> str;
    this->_phonebook[index].setDarkestSecret(str);
    if (index +1 >= 8)
        this->_index = 0;
    else
        this->_index += 1;
    this->_nbr_added += 1;
    return (0);
}

int PhoneBook::Search(void) {
    std::string str;
    std::string::const_iterator it = str.begin();
    long        enterIndex;
    const int   nbr_contact = ((this->_nbr_added > 8) ? 8 : this->_nbr_added);

    _print_line("index", "first name", "last name", "nickname");
    for (int i = 0; i < nbr_contact; i++)
    {
        _print_line(std::to_string(i), this->_phonebook[i].getFirstName(), this->_phonebook[i].getLastName(),this->_phonebook[i].getNickname());
    }
    while (1)
    {
        std::cout << "Enter Index : ";
        std::cin >> str;
        if (std::cin.eof() || str == "EXIT")
            break;
        while (it != str.end() && std::isdigit(*it)) ++it;
        if (str.empty() || it != str.end())
        {
            std::cout << "Invalid index" << std::endl;
            continue;
        }
        enterIndex = std::strtol(str.data(), NULL, 10);
        if (enterIndex < 0 || enterIndex >= 8)
            std::cout << "Invalid index" << std::endl;
        else if (enterIndex < std::min(nbr_contact, 8))
        {
            std::cout << "First Name : " << this->_phonebook[enterIndex].getFirstName() << std::endl;
            std::cout << "Last Name : " << this->_phonebook[enterIndex].getLastName() << std::endl;
            std::cout << "Nickname : " << this->_phonebook[enterIndex].getNickname() << std::endl;
            std::cout << "Phone number : " << this->_phonebook[enterIndex].getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret : " << this->_phonebook[enterIndex].getDarkestSecret() << std::endl;
        }
        else
            std::cout << "Contact not found." << std::endl;
    }
    return 0;
}

void PhoneBook::_print_line(std::string index, std::string name, std::string lastname, std::string nickname) {
    std::cout << "|";
    _print_elem(index);
    std::cout << "|";
    _print_elem(name);
    std::cout << "|";
    _print_elem(lastname);
    std::cout << "|";
    _print_elem(nickname);
    std::cout << "|";
    std::cout << std::endl;
}

void PhoneBook::_print_elem(std::string str) {
    if (str.size() > 10)
        std::cout << str.substr(0, 10 -1) << ".";
    else
        std::cout << std::setw(10) << str;
}

PhoneBook::~PhoneBook() {
    return;
}
