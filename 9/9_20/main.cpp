/**
 * 9.20��ϰ��
 * ��д���򣬴�һ��list<int>����������deque�У�ֵΪż���������ķֱ𿽱�����ͬ��deque
 */
#include <iostream>
#include <list>
#include <deque>

using namespace std;
int main()
{
    list<int> ilist{0,1,2,3,4,5,6,7,8};
    deque<int> adeq;//�������
    deque<int> bdeq;//���ż��
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