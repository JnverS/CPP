//
// Created by Егор on 14.05.2022.
//

#ifndef EX01_BRAIN_H
#define EX01_BRAIN_H
#include <iostream>

class Brain {
public:
    Brain();
    Brain(const Brain&);
    ~Brain();

    Brain& operator = (const Brain&);
    std::string getIdea(int) const;
    void setIdea(int, const std::string);
private:
    std::string _ideas[100];
};


#endif //EX01_BRAIN_H
