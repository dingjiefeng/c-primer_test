#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

using namespace std;
void elimDups(vector<string> &svec)
{
	sort(svec.begin(), svec.end());
	auto endnew = unique(svec.begin(), svec.end());
	svec.erase(endnew, svec.end());
}
void biggies(std::vector<string> &v,
			std::vector<string>::size_type sz)
{
	elimDups(v);
	//stable_sort(v.begin(), v.end(),
	// [] (const string &a, const string &b) {return a.size() < b.size(); });
	
	//auto wc = find_if(v.begin(), v.end(), 
	//	[sz] (const string &a) { return a.size()>=sz; });
	//利用partition代替find_if
	auto wc = partition(v.begin(), v.end(), [sz] (const string &a) { return a.size()>=sz;} );
	auto cnt = wc-v.begin();
	cout << cnt << "个" << "长度大于等于" << sz << endl;
	for_each(v.begin(), wc, 
		[] (const string &s) {cout << s << " ";});
	cout << endl;

}

int main(int argc, char *argv[] )
{
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "打开文件失败" << endl;
		exit(1);
	}
	string tmp;
	vector<string> svec;
	while(in >> tmp)
	{
		svec.push_back(tmp);
	}
	for (auto &a: svec)
	{
		cout << a << " ";
	}
	cout << endl;
	biggies(svec, 4);
	return 0;
}
