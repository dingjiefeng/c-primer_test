#include <iostream>
#include <string>
#include <vector>
using namespace std;
class IntSizeCmp
{
public:
	IntSizeCmp(int i):g(i) {};
	bool operator()(std::string v) { return v.size()==g;}
	void operator=(int i);
private:
	int g;
};

void IntSizeCmp::operator=(int i)
{
	g = i;
}

int main()
{
	int cnt[10];
	for(int i = 0;i<10;++i)
		cnt[i] = 0;
	std::vector<std::string> svec;
	std::string input;
	IntSizeCmp isc(0);
	while(std::cin>>input)
	{
		svec.push_back(input);
	}
	for(int i = 1; i<11; ++i)
	{
		isc = i;
		for(auto &s: svec)
			cnt[i-1] += isc(s);
	}
	for(int i = 0;i<10;++i)
		std::cout << cnt[i] << " ";
	std::cout << std::endl;
	for(auto &s: svec)
		cout << s << " ";
	std::cout << std::endl;
	return 0;
}