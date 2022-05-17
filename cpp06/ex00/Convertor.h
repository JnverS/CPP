
#ifndef EX00_CONVERTOR_H
#define EX00_CONVERTOR_H
#include <iostream>
#include <string>

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

    bool isPseudoLiterals(std::string);

    bool tryConvertChar(std::string, char&);
    bool tryConvertInt(std::string, int&);
    bool tryConvertFloat(std::string, float&);
    bool tryConvertDouble(std::string, double&);

    void castIntLiteral(int literal);
    void castFloatLiteral(float literal);
    void castDoubleLiteral(double literal);
    void castCharLiteral(char literal);

};
#endif //EX00_CONVERTOR_H
