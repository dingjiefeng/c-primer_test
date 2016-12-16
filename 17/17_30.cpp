#include <random>
#include <iostream>
#include <ctime>
using namespace std;

unsigned rand_unsigned(unsigned sd,unsigned min, unsigned max)
{
	static default_random_engine e(sd);
	static uniform_int_distribution<unsigned> u(min,max);
	return u(e);
}

int main()
{
	cout << "please input a num as seed:" << endl;
	int num;
	cin >> num;
	cout << "please input min and max:" << endl;
	int min, max;
	cin >> min >> max;
	cout << rand_unsigned(num,min,max) << " " 
		 << rand_unsigned(num,min,max) << endl;
	return 0;
}