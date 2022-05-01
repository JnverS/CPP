#include <iostream>

int main() {
    std::string cmd;

    std::cout << "Введите команду: ";
    getline(std::cin, cmd);

    switch (cmd) {
        case "ADD":
            ; //save new contact
        case "SEARCH":
            ; //view contact
        case "EXIT":
            ; //end of programm
        default:
            std::cout << cmd;
    }

    return 0;
}
