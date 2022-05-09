//
// Created by Kirth Dominick on 4/29/22.
//

#include "Contact.h"

Contact::Contact (void) {
    return;
}

std::string Contact::getFirstName(void) const {
    return (this->_name);
}

std::string Contact::getLastName(void) const {
    return (this->_lastName);
}

std::string Contact::getNickname(void) const {
    return (this->_nickname);
}

std::string Contact::getPhoneNumber(void) const {
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
    return (this->_darkestSecret);
}

void Contact::setFirstName(std::string &str) {
    this->_name = str;
}

void Contact::setLastName(std::string &str) {
    this->_lastName = str;
}

void Contact::setNickname(std::string &str) {
    this->_nickname = str;
}

void Contact::setPhoneNumber(std::string &str) {
    this->_phoneNumber = str;
}

void Contact::setDarkestSecret(std::string &str) {
    this->_darkestSecret = str;
}

Contact::~Contact() {
    return;
}


