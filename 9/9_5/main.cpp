/**
 * 9.5练习：
 * 重协上一题。并返回一个迭代器指向找到的元素
 * 注意，程序应该处理未找到的情况
 */
#include <iostream>
#include <vector>

using namespace std;
vector<int>::iterator findVector(vector<int>::iterator beg,vector<int>::iterator end, int var)
{
    for (auto i = beg; i != end ; ++i)
    {
        if (*i == var)
        {
            return i;
        }
    }
    return beg;
}
int main()
{
    vector<int> ivec{0,1,2,3,4,5,6,7,8};
    int tofind;
    cout << "输入待查找的数：" << endl;
    cin >> tofind;
    int res = findVector(ivec.begin(), ivec.end(), tofind) - ivec.begin();
    if (res)
    {
        cout << "找到了，是第" << res << "个元素" << endl;
    } else
    {
        cout << "没找到！" << endl;
    }
    return 0;
}