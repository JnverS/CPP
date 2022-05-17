
#ifndef EX00_CONVERTOR_H
#define EX00_CONVERTOR_H
#include <iostream>
#include <string>
#include <iomanip>

class Convertor {
public:
    Convertor();

    Convertor(const Convertor &);

    ~Convertor();

    Convertor &operator=(const Convertor &);

    void convert(std::string);

private:
    int _intValue;
    float _floatValue;
    double _doubleValue;
    char _charValue;

    std::string specialDoubleLiterals[3];
    std::string specialFloatLiterals[3];

    bool tryConvertChar(std::string, char&);
    bool tryConvertInt(std::string, int&);
    bool tryConvertFloat(std::string, float&);
    bool tryConvertDouble(std::string, double&);

    void castIntLiteral(int literal);
    void castFloatLiteral(float literal);
    void castDoubleLiteral(double literal);
    void castCharLiteral(char literal);
    void castInvalidLiteral();

    bool isSpecialDoubleLiteral(const std::string& basicString, int &index);

    void castSpecialDoubleLiteral(int index);

    void castSpecialFloatLiteral(int index);

    bool isSpecialFloatLiteral(const std::string& basicString, int &index);
};
#endif //EX00_CONVERTOR_H
