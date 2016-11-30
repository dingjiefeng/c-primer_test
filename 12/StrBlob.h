/*
 * include class StrBlob and class StrBlobPtr
 */
#ifndef _STRBLOB_H_
#define _STRBLOB_H_
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <stdexcept>

using namespace std;
class StrBlobPtr;

class StrBlob
{
	friend class StrBlobPtr;
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const {return data->size();};
	bool empty() const {return data->empty();};
	//add or delete 
	void push_back(const string &t) {data->push_back(t);};
	void pop_back();
	//read
	string & front();
	const string & front() const;
	string& back();
	const string& back() const;
	~StrBlob();

	StrBlobPtr begin();
	StrBlobPtr end();
private:
	shared_ptr<vector<string>> data;
	void check(size_type i,const string msg) const;

};

StrBlob::StrBlob():data(make_shared<vector<string>>()) {};

StrBlob::StrBlob(initializer_list<string> il):
				data(make_shared<vector<string>>(il)) {};
void StrBlob::check(size_type i,const string msg) const
{
	if(i>=data->size())
		throw out_of_range(msg);
}

string& StrBlob::front()
{
	//if vector is empty,check() will throw a except
	check(0,"front on empty StrBlob");
	return data->front();
}
//the version of const front
string& const StrBlob::front ()
{
	check(0,"front on empty StrBlob");
	return data->front();
}
string& StrBlob::back()
{
	check(0,"back on empty StrBlob");
	return data->back();
}
string& const StrBlob::back()
{
	check(0,"back on empty StrBlob");
	return data->back();
}
void StrBlob::pop_back()
{
	check(0,"pop_back on empty StrBlob");
	return data->pop_back();
}










class StrBlobPtr
{
	friend eq(const StrBlobPtr&, const StrBlobPtr&);
public:
	StrBlobPtr(): curr(0) {};
	StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {};
	string& deref() const;
	StrBlobPtr & incr();
	StrBlobPtr & decr();
private:
	shared_ptr<vector<string>>
		check(size_t, const string&) const;

	weak_ptr<vector<string>> wptr;
	size_t curr;//current place
}
shared_ptr<vector<string>>
StrBlobPtr::check(size_t i, const string& msg) const
{
	auto ret = wptr.lock();
	if(!ret)
		throw runtime_error("unbound StrBlobPtr");
	if(i >= ret->size())
		throw out_of_range(msg);
	return ret;
}
string& StrBlobPtr::deref() const
{
	auto p = check(curr,"dereference past end");
	return (*p)[curr];
}
StrBlobPtr& StrBlobPtr::incr()
{
	check(curr,"increment past end of StrBlobPtr");
	++curr;
	return *this;
}
StrBlobPtr& StrBlobPtr::decr()
{
	--curr;
	check(curr,"decrenment past begin of StrBlobPtr");
	return *this;
}


StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
	auto ret = StrBlobPtr(*this,data->size());
	return ret;
}

bool eq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
	auto l = lhs.wptr.lock(),r = rhs.wptr.lock();
	if(l==r)
		return (!r || lhs.curr == rhs.curr);
	else
		return false;

}
bool neq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
	return !eq(lhs,rhs);
}

















#endif