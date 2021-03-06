#ifndef 15_3_H
#define 15_3_H

#include <iostream>


class Quote
{
public:
	Quote() = default;
	Quote(const std::string book, double sales_price):
			bookNo(book),price(sales_price) {}
	std::string isbn() { return bookNo;}
	virtual double net_price(std::size_t n) const { return n*price;}

	virtual ~Quote() = default;
	virtual debug() 
	{
		std::cout << "bookNo=" << bookNo << "price=" << price << std::endl;
	}
private:
	std::string bookNo;
private:
	double price = 0.0;
};

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN:" << item.isbn() << " # sold: " << n << " total due: "
	   << ret << std::endl;
	   return ret;
}



#endif