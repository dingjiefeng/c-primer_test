/**
 * 4.21练习：
 * 使用条件运算符从vector<int>中找到哪些元素的值是奇数，
 * 然后将这些奇数值翻倍
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> ivec{1,2,3,4,5};
    cout << "原数组" << endl;
    for (auto j = ivec.begin(); j != ivec.end(); ++j)
    {
        cout << *j << " ";
    }
    cout << endl;
    for (auto &i : ivec)
    {
        i = (i % 2 == 1) ? (i * 2) : (i);
    }
    cout << "调整后数组" << endl;
    for (auto j = ivec.begin(); j != ivec.end(); ++j)
    {
        cout << *j << " ";
    }
    cout << endl;
    return 0;
}