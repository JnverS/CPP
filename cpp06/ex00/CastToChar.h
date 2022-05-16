#ifndef EX00_CASTTOCHAR_H
#define EX00_CASTTOCHAR_H
#include <iostream>

class CastToChar {
public:
    CastToChar();
    CastToChar(const CastToChar copy);
    ~CastToChar();

    CastToChar& operator = (const CastToChar&);

    char casting(std::string);
private:
    char _ch;
};


#endif //EX00_CASTTOCHAR_H
