#include <memory>
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int n = 5;
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	auto q = p;
	string s;
	while(cin>>s && q-p<n)
		alloc.construct(q++,s);
	for(int i=0;i<n;i++)
		cout << *(p+i) << endl;
	while(q != p)
		alloc.destroy(--q);
	alloc.deallocate(p,n);
	return 0;
}
