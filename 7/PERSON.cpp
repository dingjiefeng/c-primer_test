//
// Created by djf on 2016/11/1 0001.
//

#include "PERSON.h"

ADRESS & PERSON::getAdress(const PERSON &person) const
{
    return person.adress;
}
NAME & PERSON::getName(const PERSON &person) const
{
    return person.name;
}
istream &PERSON_read(isream &is,PERSON person)
{
    is >> person.name >> person.adress;
    return is;
};
extern ostream &PERSON_print(osream &os,const PERSON person)
{
    os << person.name << " " << person.adress << endl;
    return os;
};