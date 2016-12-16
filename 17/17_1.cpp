#include <iostream>
#include <tuple>
using namespace std;

int main()
{
	tuple<int,int,int> it(10,20,30);
	cout << get<0>(it) << " " 
	     << get<1>(it) << " "
	     << get<2>(it) << " " << endl;
	return 0;
}
