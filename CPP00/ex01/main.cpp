#include <iostream>

int main() {
    std::string cmd;

    while (1) {
        std::cout << "Введите команду: ";
        getline(std::cin, cmd);

        if (cmd == "ADD") {
            std::cout << cmd << " save new contact" << std::endl;
        } else if (cmd == "SEARCH") {
            std::cout << cmd << " find contact" << std::endl;
        } else if (cmd == "EXIT") {
            std::cout << cmd << " end the programm" << std::endl;
        }
    }

    return 0;
}
