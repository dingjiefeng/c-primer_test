#include <iostream>
#include <bitset>

using namespace std;
int main()
{
	unsigned bp = 1 | 1 << 1 | 1 << 2 | 1 << 4 | 1 << 7 | 
			1 << 12 | 1 << 20;
	bitset<100> bv(bp);
	cout << bv << endl;
	bitset<32> bv2;
	bv2.set(1);
	bv2.set(30);
	cout << bv2 << endl;

	return 0;
}