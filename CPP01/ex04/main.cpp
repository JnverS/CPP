#include <iostream>
#include <fstream>
#include <iosfwd>
#include <cstring>

int main(int argc, char *argv[]) {

    if (argc != 4 || std::strlen(argv[2]) == 0) {
        std::cout << "Error arguments!" << std::endl;
        return 1;
    }
    std::string fileName = argv[1];
    std::string s2 = argv[3];
    std::string s1 = argv[2];
    std::string replaceFile = fileName.append(".replace");
    std::string buffer;

    setlocale(LC_ALL, "rus");
    std::ifstream fin;
    fin.open(argv[1]);
    if(fin.fail())
    {
        std::cout<<"cannot open file" << argv[1] << std::endl;
        return 1;
    }

    std::ofstream fout;
    fout.open(replaceFile);
    if(fin.fail()){
        std::cout<<"cannot create file" << replaceFile << std::endl;
        return 1;
    }

    while(true)
    {
        std::getline(fin, buffer);
        while (true) {
            size_t fnd_res = buffer.find(argv[2]);

            if (fnd_res == std::string::npos) {
                fout << buffer;
                break;
            } else {
                fout << buffer.substr(0, fnd_res);
                fout << s2;
                fout << buffer.substr(fnd_res + s1.size());
                break;
            }
        }
        if (fin.eof())
            break;
        fout << std::endl;
    }
    fin.close();
    fout.close();
    return 0;
}
