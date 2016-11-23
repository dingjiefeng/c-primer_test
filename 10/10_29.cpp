#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if (!in)
	{
		cout << "open file failed!" << endl;
		exit(1);
	}

	istream_iterator<string> in_iter(in);
	istream_iterator<string> eof;
	vector<string> words;
	while (in_iter != eof)
		words.push_back(*in_iter++);
	for (auto &a: words)
	{
		cout << a << " ";
	}
	cout << endl;
	return 0;
}
