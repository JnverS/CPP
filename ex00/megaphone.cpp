#include <iostream>

int main(int argc, char *argv[]) {
    int i = 1;
    int j = 0;

    if (argc > 1) {
        while (argv[i]) {
            j = 0;
            while (argv[i][j])
                std::cout << (char)_toupper(argv[i][j++]);
            i++;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
