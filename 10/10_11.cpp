#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
bool isShorter(string const &s1, string const &s2)
{
	return s1.size() < s2.size();
}
void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto newEnd = unique(words.begin(), words.end());
	words.erase(newEnd, words.end());
}
int main()
{
	vector<string> words = {"djf","hello","djfhello","djf","hello","world","interesting","djfis"};
	elimDups(words);
	stable_sort(words.begin(), words.end(), isShorter);
	for (auto const &a: words)
	{
		cout << a << " ";
	}
	cout << endl;
	return 0;
}
