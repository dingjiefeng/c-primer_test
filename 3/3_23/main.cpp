/**
 * 3.23练习：
 * 1.创建一个含有10个整数的vector
 * 2.使用迭代器将整数变为原来两倍并输出
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    for (auto i = ivec.begin(); i != ivec.end(); ++i)
    {
        *i = 2*(*i);
        cout << *i << " ";
    }
    return 0;
}