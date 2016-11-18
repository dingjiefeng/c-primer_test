#include <iostream>

using namespace std;
int main()
{
	int a =  3;
	auto sum = [a] (int b) {return a+b; };
	cout << sum(5) << endl;
	return 0;
}