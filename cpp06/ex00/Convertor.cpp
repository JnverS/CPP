#include "Convertor.h"

Convertor::Convertor() {
    specialDoubleLiterals[0] = "nan";
    specialDoubleLiterals[1] = "+inf";
    specialDoubleLiterals[2] = "-inf";

    specialFloatLiterals[0] = "nanf";
    specialFloatLiterals[1] = "+inff";
    specialFloatLiterals[2] = "-inff";
}

Convertor::Convertor(const Convertor &copy) {
}

Convertor::~Convertor() {
}

Convertor &Convertor::operator=(const Convertor &copy) {
    return *this;
}

void Convertor::convert(std::string str) {
    if (tryConvertChar(str, _charValue)) {
        castCharLiteral(_charValue);
        return;
    }
    if (tryConvertInt(str, _intValue)) {
        castIntLiteral(_intValue);
        return;
    }
    if(isSpecialDoubleLiteral(str,_intValue)) {
        castSpecialDoubleLiteral(_intValue);
        return;
    }
    if (tryConvertDouble(str, _doubleValue)) {
        castDoubleLiteral(_doubleValue);
        return;
    }
    if(isSpecialFloatLiteral(str,_intValue)) {
        castSpecialFloatLiteral(_intValue);
        return;
    }
    if (tryConvertFloat(str, _floatValue)) {
        castFloatLiteral(_floatValue);
        return;
    }
    castInvalidLiteral();
}

void  Convertor::castInvalidLiteral(){
    std::cout<<"char: "<<"impossible"<<std::endl;
    std::cout<<"int: "<<"impossible"<<std::endl;
    std::cout<<"float: "<<"impossible"<<std::endl;
    std::cout<<"double: "<<"impossible"<<std::endl;
}

void Convertor::castIntLiteral(int literal) {
    if(isprint(literal))
        std::cout<<"char: "<<static_cast<char>(literal)<<std::endl;
    else
        std::cout<<"char: "<<"non displayable"<<std::endl;
    std::cout<<std::fixed<<std::setprecision(0);
    std::cout<<"int: "<<literal<<std::endl;
    std::cout<<std::fixed<<std::setprecision(1);
    std::cout<<"float: "<<static_cast<float>(literal)<<"f"<<std::endl;
    std::cout<<"double: "<<static_cast<double>(literal)<<std::endl;
}
void Convertor::castFloatLiteral(float literal) {
    if(isprint(literal))
        std::cout<<"char: "<<static_cast<char>(literal)<<std::endl;
    else
        std::cout<<"char: "<<"non displayable"<<std::endl;
    std::cout<<std::fixed<<std::setprecision(0);
    std::cout<<"int: "<<static_cast<float>(literal)<<std::endl;
    std::cout<<std::fixed<<std::setprecision(1);
    std::cout<<"float: "<<literal<<"f"<<std::endl;
    std::cout<<"double: "<<static_cast<double>(literal)<<std::endl;
}
void Convertor::castDoubleLiteral(double literal) {
    if(isprint(literal))
        std::cout<<"char: "<<static_cast<char>(literal)<<std::endl;
    else
        std::cout<<"char: "<<"non displayable"<<std::endl;
    std::cout<<std::fixed<<std::setprecision(0);
    std::cout<<"int: "<<static_cast<float>(literal)<<std::endl;
    std::cout<<std::fixed<<std::setprecision(1);
    std::cout<<"float: "<<static_cast<float>(literal)<<"f"<<std::endl;
    std::cout<<"double: "<<literal<<std::endl;
}
void Convertor::castCharLiteral(char literal) {
    if(isprint(literal))
        std::cout<<"char: "<<literal<<std::endl;
    else
        std::cout<<"char: "<<"non displayable"<<std::endl;
    std::cout<<std::fixed<<std::setprecision(0);
    std::cout<<"int: "<<static_cast<float>(literal)<<std::endl;
    std::cout<<std::fixed<<std::setprecision(1);
    std::cout<<"float: "<<static_cast<float>(literal)<<"f"<<std::endl;
    std::cout<<"double: "<<static_cast<double>(literal)<<std::endl;
}

bool Convertor::tryConvertChar(std::string str, char& result) {
    if(strlen(str.c_str())>1) return false;
    char tmp[255];
    std::strcpy(tmp, str.c_str());
    if ((tmp[0] > 64 && tmp[0] < 91) || (tmp[0] > 96 && tmp[0] < 123)){
        result = *tmp;
        return true;
    }
    else
        return false;
}

bool Convertor::tryConvertInt(std::string str, int &result) {
    int tmp;
    try {
        tmp = atoi(str.c_str());
        std::string num = std::to_string(tmp);
        if (str.length() != num.length())
            return (false);
    }
    catch (std::exception) {
        return false;
    }
    result = tmp;
    return true;
}

bool Convertor::tryConvertFloat(std::string str, float &result) {
    float tmp;
    size_t size;
    if (str[str.length() - 1] != 'f' || str.find('.') == std::string::npos) return false;
    try {
        tmp = std::stof(str, &size);
        if (str.length() - 1  != (unsigned long)size) return (false);
    }
    catch (std::exception e) {
        return false;
    }
    result = tmp;
    return true;
}

bool Convertor::tryConvertDouble(std::string str, double &result) {
    double tmp;
    size_t size;
    try {
        tmp = std::stod(str, &size);
        if (str.length() != (unsigned long)size) return (false);
    }
    catch (std::exception) {
        return false;
    }
    result = tmp;
    return  true;
}

bool Convertor::isSpecialDoubleLiteral(const std::string& basicString, int &index) {
    for (int i = 0; i < 3; ++i) {
        if(specialDoubleLiterals[i] == basicString){
            index = i;
            return true;
        }
    }
    return false;
}

void Convertor::castSpecialDoubleLiteral(int index) {
    std::cout<<"char: "<<"impossible"<<std::endl;
    std::cout<<"int: "<<"impossible"<<std::endl;
    std::cout << "float: " << specialFloatLiterals[index] << std::endl;
    std::cout<<"double: "<<specialDoubleLiterals[index]<<std::endl;
}

bool Convertor::isSpecialFloatLiteral(const std::string& basicString, int &index) {
    for (int i = 0; i < 3; ++i) {
        if(specialFloatLiterals[i] == basicString){
            index = i;
            return true;
        }
    }
    return false;
}

void Convertor::castSpecialFloatLiteral(int index) {
    std::cout<<"char: "<<"impossible"<<std::endl;
    std::cout<<"int: "<<"impossible"<<std::endl;
    std::cout << "float: " << specialFloatLiterals[index] << std::endl;
    std::cout<<"double: "<<specialDoubleLiterals[index]<<std::endl;
}