
#include "Convertor.h"


Convertor::Convertor() {
}

Convertor::Convertor(const Convertor &) {
}

Convertor::~Convertor() {
}

Convertor &Convertor::operator=(const Convertor &) {
    return *this;
}

void Convertor::convert(std::string str) {
    int intValue;
    if (tryConvertInt(str, intValue)) {
        castIntLiteral(intValue);
        return;
    }

}

void Convertor::castIntLiteral(int literal) {
    if(isprint(literal))
        std::cout<<"char: "<<static_cast<char>(literal)<<std::endl;
    else
        std::cout<<"char: "<<"non displayable"<<std::endl;
    std::cout<<"int: "<<literal<<std::endl;
    std::cout<<"float: "<<static_cast<float>(literal)<<".0f"<<std::endl;
    std::cout<<"double: "<<static_cast<double >(literal)<<".0"<<std::endl;

}

bool Convertor::tryConvertChar(std::string) {
    try {

    }
    catch (std::exception e) {
        return false;
    }
    return true;
}

bool Convertor::tryConvertInt(std::string str, int &result) {
    int tmp;
    try {
        tmp = atoi(str.c_str());
    }
    catch (std::exception) {
        return false;
    }

    result = tmp;
    return true;
}

bool Convertor::tryConvertFloat(std::string) {
    try {

    }
    catch (std::exception e) {
        return false;
    }
    return true;
}

bool Convertor::tryConvertDouble(std::string) {
    try {

    }
    catch (std::exception e) {
        return false;
    }
    return true;
}