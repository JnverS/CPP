#include "Convertor.h"


Convertor::Convertor() {
}

Convertor::Convertor(const Convertor &copy) {
    _intValue = copy._intValue;
    _charValue = copy._charValue;
    _doubleValue = copy._doubleValue;
    _floatValue = copy._floatValue;
}

Convertor::~Convertor() {
}

Convertor &Convertor::operator=(const Convertor &copy) {
    if (this == &copy)
        return *this;
    this->_intValue = copy._intValue;
    this->_charValue = copy._charValue;
    this->_doubleValue = copy._doubleValue;
    this->_floatValue = copy._floatValue;
    return *this;
}

void Convertor::convert(std::string str) {
//    if (isPseudoLiterals(str))
//        return;
    if (tryConvertChar(str, _charValue)) {
        castCharLiteral(_charValue);
        return;
    }
    if (tryConvertInt(str, _intValue)) {
        castIntLiteral(_intValue);
        return;
    }
//    if (tryConvertDouble(str, _doubleValue)) {
//        castDoubleLiteral(_doubleValue);
//        return;
//    }
//    if (tryConvertFloat(str, _floatValue)) {
//        castFloatLiteral(_floatValue);
//        return;
//    }
}

//bool Convertor::isPseudoLiterals(std::string str){
//    std::string arrayValue[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
//    for (int i = 0;i < 6; i++)
//    {
//        if (str == arrayValue[i])
//        {
//            switch (i):
//            case 0:
//                std::cout<<"char: "<<"impossible"<<std::endl;
//                std::cout<<"int: "<<"impossible"<<std::endl;
//                std::cout<<"float: "<<arrayValue[i]<<std::endl;
//                std::cout<<"double: "<<static_cast<double>(literal)<<std::endl;
//            case 1:
//            case 2:
//            case 3:
//            case 4:
//            case 5:
//            return true;
//        }
//    }
//    return false;
//}

void Convertor::castIntLiteral(int literal) {
    if(isprint(literal))
        std::cout<<"char: "<<static_cast<char>(literal)<<std::endl;
    else
        std::cout<<"char: "<<"non displayable"<<std::endl;
    std::cout<<"int: "<<literal<<std::endl;
    std::cout<<"float: "<<static_cast<float>(literal)<<"f"<<std::endl;
    std::cout<<"double: "<<static_cast<double>(literal)<<std::endl;
}
void Convertor::castFloatLiteral(float literal) {
    if(isprint(literal))
        std::cout<<"char: "<<static_cast<char>(literal)<<std::endl;
    else
        std::cout<<"char: "<<"non displayable"<<std::endl;
    std::cout<<"int: "<<static_cast<float>(literal)<<std::endl;
    std::cout<<"float: "<<literal<<std::endl;
    std::cout<<"double: "<<static_cast<double>(literal)<<std::endl;
}
void Convertor::castDoubleLiteral(double literal) {
    if(isprint(literal))
        std::cout<<"char: "<<static_cast<char>(literal)<<std::endl;
    else
        std::cout<<"char: "<<"non displayable"<<std::endl;
    std::cout<<"int: "<<static_cast<float>(literal)<<std::endl;
    std::cout<<"float: "<<static_cast<float>(literal)<<"f"<<std::endl;
    std::cout<<"double: "<<literal<<std::endl;
}
void Convertor::castCharLiteral(char literal) {
    if(isprint(literal))
        std::cout<<"char: "<<literal<<std::endl;
    else
        std::cout<<"char: "<<"non displayable"<<std::endl;
    std::cout<<"int: "<<static_cast<float>(literal)<<std::endl;
    std::cout<<"float: "<<static_cast<float>(literal)<<"f"<<std::endl;
    std::cout<<"double: "<<static_cast<double>(literal)<<std::endl;
}

bool Convertor::tryConvertChar(std::string str, char& result) {
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
       // len = str.length();
        tmp = atoi(str.c_str());
        std::string num = std::to_string(tmp);
        if (str.length() == num.length()) {
            result = tmp;
            return (true);
        }
        else
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
    try {
        tmp = atof(str.c_str());
    }
    catch (std::exception e) {
        return false;
    }
    result = tmp;
    return true;
}

bool Convertor::tryConvertDouble(std::string str, double &result) {
    double tmp;
    try {
        tmp = atof(str.c_str());
    }
    catch (std::exception e) {
        return false;
    }
    result = tmp;
    return true;
}
