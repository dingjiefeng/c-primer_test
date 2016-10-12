/**
 * 3.25练习，用迭代器完成93页的分数分类
 * 1.分数：45 65 95 100 39 67 95 76 88 76 83 92 76 93
 * 2.0-9，10-19...90-99,100 共11个分数段
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<unsigned> ivec{45,65,95,100,39,67,95,76,88,76,83,92,76,93};
    vector<unsigned> scores(11,0);
    for (auto i = 0; i < ivec.size(); ++i)
    {
        ++*(scores.begin()+(*(ivec.begin()+i))/10);
    }
    for (auto j = 0; j < scores.size(); ++j)
    {
        cout << *(scores.begin() + j) << " ";
    }
    return 0;
}