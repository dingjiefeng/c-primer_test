//
// Created by djf on 2016/11/1 0001.
//

#include "Sales_data.h"
Sales_data & Sales_data::combine(const Sales_data &a)
{
    if (this->bookno == a.bookno)
    {
        revenue += a.revenue;
        unit_sold += a.unit_sold;
    } else
    {
        cerr << "ISBN不匹配" << endl;
    }
    return *this;
}
Sales_data & Sales_data::add(const Sales_data &a, const Sales_data &b)
{
    Sales_data sum = a;
    sum.combine(b);
    return sum;
}
ISBN Sales_data::isbn() const
{
    return bookno;
}
istream &Sales_read(istream &is, Sales_data &a)
{
    is >> a.bookno >> a.unit_sold >> a.price;
    a.revenue = a.unit_sold * a.price;

    return is;
};
ostream &Sales_print(ostream &os,Sales_data &a)
{
    os << a.bookno << " " << a.unit_sold << " "
       << a.price << " " << a.revenue << endl;
    return os;
}