
#ifndef EX00_CONVERTOR_H
#define EX00_CONVERTOR_H
#include <iostream>

class Convertor {
public:
    Convertor();

    Convertor(const Convertor &);

    ~Convertor();

    Convertor &operator=(const Convertor &);

    void convert(std::string);

private:
    bool tryConvertChar(std::string);

    bool tryConvertInt(std::string, int &);

    bool tryConvertFloat(std::string);

    bool tryConvertDouble(std::string);

    void castIntLiteral(int literal);

};
#endif //EX00_CONVERTOR_H
