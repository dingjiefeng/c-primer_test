#include <random>
#include <iostream>
#include <ctime>
using namespace std;

unsigned rand_unsigned(unsigned sd)
{
	static default_random_engine e(sd);
	static uniform_int_distribution<unsigned> u;
	return u(e);
}

int main()
{
	cout << "please input a num as seed:" << endl;
	int num;
	cin >> num;
	cout << rand_unsigned(num) << " " 
		 << rand_unsigned(num) << endl;
	return 0;
}