#include "Harl.h"

int main(int argc, char *argv[]) {

    if (argc >= 2) {
        Harl harl;
        if (!std::strcmp(argv[1], "DEBUG")) {
            harl.complain("debug");
            harl.complain("info");
            harl.complain("warning");
            harl.complain("error");
        }
        else if (!std::strcmp(argv[1], "INFO")){
            harl.complain("info");
            harl.complain("warning");
            harl.complain("error");
        }
        else if (!std::strcmp(argv[1], "WARNING")){
            harl.complain("warning");
            harl.complain("error");
        }
        else if (!std::strcmp(argv[1], "ERROR")){
            harl.complain("error");
        }
        else
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }


    return 0;
}
