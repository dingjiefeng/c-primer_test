#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
int main()
{
	vector<int> ivec = {1,2,3,4,5,6};
	fill_n(ivec.begin(),ivec.size(),0);
	for (auto a = ivec.cbegin(); a != ivec.cend(); ++a)
	{
		cout << *a << " ";
	}
	cout << endl;
}
