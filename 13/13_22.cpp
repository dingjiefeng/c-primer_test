#include <iostream>
#include <string>
using namespace std;
class HasPtr
{
public:
	HasPtr(const string &s = string()) :
	 ps(new string(s)), i(0) {};
	HasPtr(const HasPtr&hp):
	 ps(new string(*hp.ps)), i(hp.i) {};
	HasPtr& operator=(const HasPtr&);
	HasPtr& operator=(const string&);
	string& operator*();
	~HasPtr();
	
private:
	string *ps;
	int i;
};


HasPtr::~HasPtr()
{
	delete ps;
}

inline HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
	auto newps = new string(*rhs.ps);
	delete ps;
	ps = newps;
	i = rhs.i;
	return *this;
}

HasPtr& HasPtr::operator=(const string &rhs)
{
	*ps = rhs;
	return *this;
}

string& HasPtr::operator*()
{
	return *ps;
}


int main()
{
	HasPtr h("a");
	HasPtr p(h);
	HasPtr t = h;
	h = "jeff";
	cout << "h:" << *h << endl;
	cout << "p:" << *p << endl;
	cout << "t:" << *t << endl;
	return 0;
}