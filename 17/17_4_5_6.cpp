#include <tule>
#include <pair>
#include <iostream>
#include <vector>

using namespace std;

typedef tuple<vector<Sales_data>::size_type,
			  vector<Sales_data>::const_iterator,
			  vector<Sales_data>::const_iterator> t_match;
typedef pair<vector<Sales_data>::size_type,
			 pair<vector<Sales_data>::const_iterator,
			 	  vector<Sales_data>::const_iterator>> p_match;
vector<t_match>
findBook(const vector<vector<Sales_data>> &files,
		 const string &book)
{
	vector<t_match> res;
	for (auto i = files.cbegin(); i != files.cend(); ++i)
	{
		auto found = equal_range( i->cbegin(), i->cend(), 
								  book, compareIsbn);
		if(found.first == found.second)
			res.push_back(make_tuple(i-files.cbegin(),
									found.first, found.second));

	}
	return res;
}


vector<p_match>
findBook(const vector<vector<Sales_data>> &files,
		 const string &book)
{
	vector<p_match> res;
	for (auto i = files.cbegin(); i != files.cend(); ++i)
	{
		auto found = equal_range( i->cbegin(), i->cend(), 
								  book, compareIsbn);
		if(found.first == found.second)
			res.push_back(make_pair(i-files.cbegin(),
									make_pair(found.first, found.second)));

	}
	return res;
}
