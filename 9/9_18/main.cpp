/**
 * 9.18��ϰ��
 * ��д���򣬴ӱ�׼�����ȡstring���У�����һ��deque��
 * ��дһ��ѭ�����õ�������ӡdeque�е�Ԫ��
 *
 */
#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<string> sdeq;
    string stmp;
    cin >> stmp;
    sdeq.push_back(stmp);
    cin >> stmp;
    sdeq.push_back(stmp);
    cin >> stmp;
    sdeq.push_back(stmp);
    for (auto const &a : sdeq)
    {
        cout << a << " ";
    }
    return 0;
}