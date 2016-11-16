#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
int main()
{
	list<string> lvec = {"ss","dd","djf"};
	//vector<string> svec = {'ss','ss','dd'};
	int cnt = count(lvec.cbegin(),lvec.cend(),"djf");
	cout << cnt << endl;
}
