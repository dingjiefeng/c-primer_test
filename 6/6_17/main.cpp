/**
 * 6.17��ϰ��
 * 1.��дһ�������ж�string���Ƿ��д�д��ĸ
 * 2.��дһ��������Сд��ĸת��ΪСд��ĸ
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
    cout << "������һ����ĸ��" << endl;
    string str;
    cin >> str;
    if (withUpper(str))
    {
        low2upr(str);
    }
    cout << "ת�������" << str << endl;
    return 0;
}