#include <functional>
#include <iostream>
#include <map>

int add(int i, int j) { return i+j;}
int minus(int i, int j) { return i-j;}

int main()
{

	std::map<std::string, std::function<int(int, int)>> binops;
	std::function<int(int, int)> f1 = add;
	std::function<int(int, int)> f2 = minus;
	binops.insert({"+",f1});
	binops.insert({"-",f2});
	int i,j;
	std::cin >> i >> j;
	std::cout << binops["+"](i,j) << std::endl;
	return 0;
}