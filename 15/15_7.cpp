#include "15_3.h"


class Limit_quote:public Quote
{
public:
	Limit_quote(double dis, size_t lim):
		limitCnt(lim), discount(dis) {};
	double net_price(size_t cnt) const override
	{
		if(cnt>limitCnt)
			return cnt*(1-discount)*price+(cnt-limitCnt)*price;
		else
			return cnt*(1-discount)*price;
	}
private:
	size_t limitCnt;
	double discount;
};