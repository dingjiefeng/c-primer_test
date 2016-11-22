#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int i = 9;
	auto f = [i] () mutable -> bool {if(i>0){--i;return false;}else return true; };	
	for (int j = 14; j!=0; --j)
	{
		cout << f() << " ";
	}
	cout << endl;
	return 0;
}
