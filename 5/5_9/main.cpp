/**
 * 5.9练习：
 * 编写一段程序，使用一系列if语句统计从cin读入的文本中
 * 有多少元音字母（aeiou）
 */
#include <iostream>

using namespace std;
int main()
{
    string str;
    int cnt = 0;
    cout << "请输入一串字母" << endl;
    cin >> str;
    for (auto i = str.begin(); i != str.end(); ++i)
    {
        if (*i == 'a')
            ++cnt;
        if (*i == 'e')
            ++cnt;
        if (*i == 'i')
            ++cnt;
        if (*i == 'o')
            ++cnt;
        if (*i == 'u')
            ++cnt;
    }
    cout << "元音字母一共" << cnt << "个" << endl;
    return 0;
}