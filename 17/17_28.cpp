#include <random>
#include <iostream>
#include <ctime>
using namespace std;

unsigned rand_unsigned()
{
	static default_random_engine e(time(0));
	static uniform_int_distribution<unsigned> u;
	return u(e);
}

int main()
{
	cout << rand_unsigned() << " " <<rand_unsigned() << endl;
	return 0;
}