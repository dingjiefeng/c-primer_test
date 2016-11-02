//
// Created by djf on 2016/11/1 0001.
//
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;
typedef string NAME;
typedef string ADRESS;

extern istream &PERSON_read(isream &is,PERSON person);
extern ostream &PERSON_print(osream &os,const PERSON person);

class PERSON {
    friend istream &PERSON_read(isream &is,PERSON person);
    friend ostream &PERSON_print(osream &os,const PERSON person);

private:
    NAME name;
    ADRESS adress;
public:
    //构造函数
    PERSON() = default;
    PERSON(const NAME &name1):name(name1) {};
    PERSON(const NAME &name1, const ADRESS &adress1):
            name(name1), adress(adress1) {};

    NAME getName(const PERSON &person) const ;
    ADRESS getAdress(const PERSON &person) const ;

};


#endif

