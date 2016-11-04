/**
 * 9.4练习：
 * 编写函数，接受一对指向vector<int>的迭代器和一个int值；
 * 在两个迭代器范围内查找指定的值，返回一个布尔值指出是否找到
 */
#include <iostream>
#include <vector>

using namespace std;

bool findVector(vector<int>::iterator beg,vector<int>::iterator end, int var)
{
    bool res = 0;
    for (auto i = beg; i != end; ++i)
    {
        if (*i == var)
            res = 1;
    }
    return res;
}
int main()
{
    int tofind;
    vector<int> ivec{0,1,2,3,4,5,6,7};
    cout << "请输入一个待查找的整数值：" << endl;
    cin >> tofind;
    if (findVector(ivec.begin(), ivec.end(), tofind))
    {
        cout << "找到了！" << endl;
    } else
    {
        cout << "没有找到！" << endl;
    }
    return 0;
}