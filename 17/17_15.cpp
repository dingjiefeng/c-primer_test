#include <iostream>
#include <regex>

using namespace std;

int main()
{
	string p = "[^c]e";
	p = "[[:alpha:]]*"+p+"[[:alpha:]]*";
	regex r(p);
	smatch results;
	string test_str = "receipt friend thief receive";
	if(regex_search(test_str,results,r))
		cout << results.str() << endl;
	return 0;
}