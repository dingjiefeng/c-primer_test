/**
 * 9.18练习：
 * 编写程序，从标准输入读取string序列，存入一个deque中
 * 编写一个循环，用迭代器打印deque中的元素
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