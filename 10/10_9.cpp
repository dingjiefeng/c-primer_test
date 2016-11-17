#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_new = unique(words.begin(), words.end());
	words.erase(end_new, words.end());
}
int main()
{
	vector<string> svec = {"djf","hello","world","great","wall","wall","djf","djf","hello"};
	elimDups(svec);
	for (auto const &a: svec)
	{
		cout << a << " ";
	}
	cout << endl;
	return 0;
}
