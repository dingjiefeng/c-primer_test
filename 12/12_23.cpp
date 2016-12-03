#include <iostream>
#include <new>
#include <cstring>

using namespace std;
int main()
{
	//ISO C++ forbids converting a string constant to ‘char*’,
	//so use const char*
	const char *c1 = "hello";
	const char *c2 = "world";
	char* c = new char[strlen(c1)+strlen(c2)+1];
	strcpy(c,c1);strcat(c,c2);
	cout << c << endl;

	string s1 = "hello";
	string s2 = "world";
	strcpy(c,(s1+s2).c_str());
	cout << c << endl;
	delete [] c;

	return 0;
}