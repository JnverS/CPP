#include <iostream>
#include "PhoneBook.h"

int main() {
    std::string cmd;
    PhoneBook phoneBook;

    while (1) {
        std::cout << "Введите команду: ";
        std::cin >> cmd;

        if (cmd == "ADD") {
            phoneBook.AddContact();
        } else if (cmd == "SEARCH") {
            phoneBook.Search();
        } else if (cmd == "EXIT") {
            exit(0);
        }
    }
    return 0;
}
