//
// Created by djf on 2016/11/1 0001.
//
/**
 * 7.4练习：
 * 编写一个PERSON类，
 * 使其表示人员的姓名和地址，使用string对象存放这些元素
 * 后续将对其不断完善
 */
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
    NAME getName(const PERSON &person) const ;
    ADRESS getAdress(const PERSON &person) const ;

};


#endif //INC_7_4_PERSON_H

