#include "15_3.h"

class Bulk_quote:public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string book, double sales_price, 
		double dis, size_t min):
			Quote(book,sales_price), discount(dis), minqty(min) {};
	double net_price(size_t cnt) const override
	{
		if(cnt>minqty)
			return cnt*(1-discount)*price;
		else
			return cnt*price;
	}
	double debug()
	{
		Quote::debug();
		std::cout << "minqty=" << minqty << "discount=" << discount << std::endl;
	}
private:
	double discount;
	size_t minqty;
};