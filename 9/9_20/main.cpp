/**
 * 9.20练习：
 * 编写程序，从一个list<int>拷贝到两个deque中，值为偶数和奇数的分别拷贝进不同的deque
 */
#include <iostream>
#include <list>
#include <deque>

using namespace std;
int main()
{
    list<int> ilist{0,1,2,3,4,5,6,7,8};
    deque<int> adeq;//存放奇数
    deque<int> bdeq;//存放偶数
    for (auto const &v : ilist)
    {
        if (v % 2 == 0)
        {
            bdeq.push_back(v);
        } else
        {
            adeq.push_back(v);
        }
    }
    for (auto const &a : adeq)
    {
        cout << a << " ";
    }
    cout << endl;
    for (auto const &b : bdeq)
    {
        cout << b << " ";
    }
    return 0;
}