/**
 * 5.9��ϰ��
 * ��дһ�γ���ʹ��һϵ��if���ͳ�ƴ�cin������ı���
 * �ж���Ԫ����ĸ��aeiou��
 */
#include <iostream>

using namespace std;
int main()
{
    string str;
    int cnt = 0;
    cout << "������һ����ĸ" << endl;
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
    cout << "Ԫ����ĸһ��" << cnt << "��" << endl;
    return 0;
}