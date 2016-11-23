#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
int main(int argc, char * argv[])
{
	vector<int> ivec = {1,2,2,2,2,3,3,3,3,4,5};
	list<int> il;

	unique_copy(ivec.begin(), ivec.end(), back_inserter(il));
	for(auto &a: il)
		cout << a << " ";
	cout << endl;
	return 0;
}
