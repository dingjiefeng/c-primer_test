/**
 * 3.22练习：
 * 修改书上text输出代码，将第一段全都改成大些形式，然后再输出
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    //随便定义一个text
    string s1("this is first text\n");
    string s2("this is second text");
    vector<string> text;
    text.push_back(s1); text.push_back("");text.push_back(s2);
    for (auto i = text.begin(); i != text.end() && !i->empty(); ++i)
    {
        for (auto j = i->begin(); j != i->end(); ++j)//(*i).begin()与i->begin()等价
        {
            *j = toupper(*j);
        }
        cout << *i;
    }
    return 0;
}