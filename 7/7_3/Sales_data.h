//
// Created by djf on 2016/11/1 0001.
//

#ifndef INC_7_3_SALES_DATA_H
#define INC_7_3_SALES_DATA_H

#include <string>
#include <iostream>

using namespace std;

typedef std::string ISBN;
typedef unsigned UNIT_SOLD;
typedef double REVENUE;
typedef double PRICE;
class Sales_data {
    friend istream &Sales_read(istream &is,Sales_data &a);
    friend ostream &Sales_print(ostream &os,Sales_data &a);
private:
    ISBN bookno;
    UNIT_SOLD unit_sold = 0;
    REVENUE revenue = 0.0;
    PRICE price = 0.0;
public:
    Sales_data &combine(const Sales_data &a);
    Sales_data &add(const Sales_data &a, const Sales_data &b);
    ISBN isbn() const;

};
extern istream &Sales_read(istream &is,Sales_data &a);
extern ostream &Sales_print(ostream &os,Sales_data &a);

#endif //INC_7_3_SALES_DATA_H
