/**
 * 6.17练习：
 * 1.编写一个函数判断string中是否含有大写字母
 * 2.编写一个函数将小写字母转换为小写字母
 */
#include <iostream>

using namespace std;
bool withUpper(const string &s){
    bool m = 0;
    for (auto &j : s)
    {
        if (isupper(j))
        {
            m = 1;
        }
    }
    return m;
}
void low2upr(string &s){
    for (auto &j : s)
    {
        if (isupper(j))
        {
            j = tolower(j);
        }
    }
}
int main()
{
    cout << "请输入一串字母：" << endl;
    string str;
    cin >> str;
    if (withUpper(str))
    {
        low2upr(str);
    }
    cout << "转换结果：" << str << endl;
    return 0;
}