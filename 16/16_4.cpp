#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

template <typename TP,typename It>
It find(It b, It e, const TP &v)
{
	while(b != e && *b != v)
		b++;
	return b;

}

int main()
{
	vector<int> vi = {0,1,2,3,4,5,6};
	list<string> ls = {"hello","jeff","hi"};

	auto iter = find(vi.begin(), vi.end(), 3);
	if(iter == vi.end())
		cout << "fail to find" << endl;
	else
		cout << "find 3 at position " << iter-vi.begin() << endl;

	return 0;
}