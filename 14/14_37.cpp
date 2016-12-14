#include <iostream>
#include <vector>
#include <algorithm>
class IntCompare
{
public:
	IntCompare(int v) : val(v) {}
	bool operator()(int c) 
	{
		return c==val;
	};
private:
	int val;
};


int main()
{
	std::vector<int> ivec = {1,2,3,2,1};
	for(auto i: ivec)
	{
		std::cout << i << " ";
	}std::cout << std::endl;
	IntCompare ic(2);
	std::replace_if(ivec.begin(),ivec.end(),ic,200);
	for(auto i: ivec)
	{
		std::cout << i << " ";
	}std::cout << std::endl;
	return 0;
}