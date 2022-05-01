//
// Created by Kirth Dominick on 4/29/22.
//

#ifndef EX01_CONTACT_H
#define EX01_CONTACT_H


#include <string>

class Contact {
public:
    Contact(std::string name, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret) {}

private:
    std::string name;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

};


#endif //EX01_CONTACT_H
