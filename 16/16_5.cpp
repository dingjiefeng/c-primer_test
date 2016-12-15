#include <iostream>
#include <string>

using namespace std;

template <typename T,size_t N>
void print(const T (&a)[N])
{
	for (auto iter = begin(a); iter != end(a); ++iter)
	{
		cout << *iter << " ";
	}cout << endl;

}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	string s[3] = {"i","am","god"};
	print(a);
	print(s);
	return 0;
}