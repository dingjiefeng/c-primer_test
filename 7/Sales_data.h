//
// Created by djf on 2016/11/1 0001.
//

#ifndef SALES_DATA_H
#define SALES_DATA_H

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
    friend Sales_data &add(const Sales_data &a, const Sales_data &b);
private:

    ISBN bookno;
    UNIT_SOLD unit_sold = 0;
    REVENUE revenue = 0.0;
    PRICE price = 0.0;
public:
    //构造函数
    Sales_data() = default;
    Sales_data(const string &isbn):bookno(isbn) {};
    Sales_data(const string &isbn, const unsigned &num, const double &pr):
            bookno(isbn), unit_sold(num), price(pr), revenue(num * pr) {};
    Sales_data &combine(const Sales_data &a);

    ISBN isbn() const;
    //类内部定义，为隐式内联
    PRICE avg_price() const
    {
        if (unit_sold != 0)
        {
            return revenue / unit_sold;
        } else
        {
            return 0;
        }
    };

};
extern istream &Sales_read(istream &is,Sales_data &a);
extern ostream &Sales_print(ostream &os,Sales_data &a);
extern Sales_data &add(const Sales_data &a, const Sales_data &b);
#endif
