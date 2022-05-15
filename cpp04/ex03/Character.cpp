#include "Character.h"

Character::Character(){
    this->_name = "Noname";
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}
Character::Character(const std::string name){
    this->_name = name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}
Character::Character(const Character& copy){
    this->_name = copy._name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = copy._inventory[i];
}
Character::~Character(){

}

Character& Character::operator = (const Character& copy){
    if (this == &copy)
        return *this;
    this->_name = copy._name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = copy._inventory[i];
    return *this;
}
std::string const& Character::getName() const {
    return this->_name;
}
void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break ;
        }
    }
}
void Character::unequip(int idx){
    for (int i = 0; i < 4;i++)
    {
        if (i == idx)
            this->_inventory[i] = NULL;
    }
}
void Character::use(int idx, ICharacter& target){
    for (int i = 0; i < 4;i++)
    {
        if (i == idx && this->_inventory[i])
            this->_inventory[i]->use(target);
    }
}