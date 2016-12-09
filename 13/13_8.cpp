#include <iostream>
#include <memory>


class HasPtr{
	public:
		HasPtr(const std::string &s = std::string()):
			ps(new std::string(s)),i(0) {};
		HasPtr & operator=(const HasPtr &rhl);
		HasPtr(const HasPtr &hp);
		~HasPtr(){delete ps; };

	private:
		std::string *ps;
		int i;
	
};


HasPtr::HasPtr(const HasPtr &hp)
{
	ps = new std::string(*hp.ps);
	i = hp.i;
}

HasPtr& 
HasPtr::operator=(const HasPtr &rhl)
{
	auto newps = new std::string(*rhl.ps);
	delete ps;
	ps = newps;
	i = rhl.i;

	return *this;
}


int main()
{
	return 0;
}
