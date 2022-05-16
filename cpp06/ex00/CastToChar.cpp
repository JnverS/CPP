#include "CastToChar.h"

CastToChar::CastToChar(){

}

CastToChar::CastToChar(const CastToChar copy){

}

CastToChar::~CastToChar(){
}

CastToChar& CastToChar::operator = (const CastToChar&){

}

char CastToChar::casting(std::string str){
    return dynamic_cast(char) str;
}