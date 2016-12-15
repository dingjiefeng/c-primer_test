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

template <typename T, size_t N>
const T* myBegin(const T (&a)[N])
{
	return &a[0];
}

template <typename T, size_t N>
const T* myEnd(const T (&a)[N])
{
	return &a[0]+N;
}

int main()
{
	int a[5] = {0,1,2,3,4};
	cout << *myBegin(a) << " " << *(myEnd(a) -1)<< endl;
	

	return 0;
}