#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec = {1,2,3,4,5,6};
	fill_n(ivec.begin(), ivec.size(), 0);
	for(auto &a: ivec)
	{
		cout << a << " ";
	}
	cout << endl;
	return 0;
}
