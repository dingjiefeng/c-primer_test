#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
int main()
{
	vector<int> ivec = {1,2,3,4,5,6,7};
	int sum = accumulate(ivec.cbegin(),ivec.cend(),0);
	cout << sum << endl;
}
