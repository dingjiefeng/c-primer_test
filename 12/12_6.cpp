#include <memory>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
vector<int>* fun()
{
	vector<int> *p = new vector<int>;
	return p;
}
vector<int>* read(vector<int> * p)
{
	int a;
	while(cin>>a)
	{
		(*p).push_back(a);
	}
	return p;
}
void output(vector<int>*p)
{
	for(const auto &v:*p)
		cout<<v<<" ";
	cout << endl;
}
int main()
{
	vector<int> *pt = fun();
	read(pt);
	output(pt);
	delete pt;
	pt = nullptr;
	return 0;
}