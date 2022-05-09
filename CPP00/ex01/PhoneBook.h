//
// Created by Kirth Dominick on 4/29/22.
//

#ifndef EX01_PHONEBOOK_H
#define EX01_PHONEBOOK_H


#include "Contact.h"

class PhoneBook {
public:
   PhoneBook(void);
   ~PhoneBook();

   int AddContact(void);
   int Search(void);

private:
    Contact _phonebook[8];
    int _index;
    int _nbr_added;

    void		_print_line(std::string, std::string, std::string, std::string);
    void		_print_elem(std::string);
};


#endif //EX01_PHONEBOOK_H
