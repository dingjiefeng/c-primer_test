/**
 * 5.11��ϰ��
 * �޸�5.10������ʶ��ո��Ʊ�������з�����
 */
#include <iostream>

using namespace std;
int main()
{
    string str;
    int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
    int spaceCnt = 0, tabCnt = 0, lineCnt = 0;

    cout << "������һ����ĸ" << endl;
    cin >> str;
    for (auto i = str.begin(); i != str.end(); ++i)
    {
        switch (*i)
        {
            case 'a':
            case 'A':
                ++acnt;
                break;
            case 'e':
            case 'E':
                ++ecnt;
                break;
            case 'i':
            case 'I':
                ++icnt;
                break;
            case 'o':
            case 'O':
                ++ocnt;
                break;
            case 'u':
            case 'U':
                ++ucnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++lineCnt;
                break;

        }
    }
    cout << "Ԫ����ĸaһ��" << acnt << "��" << endl;
    cout << "Ԫ����ĸeһ��" << ecnt << "��" << endl;
    cout << "Ԫ����ĸiһ��" << icnt << "��" << endl;
    cout << "Ԫ����ĸoһ��" << ocnt << "��" << endl;
    cout << "Ԫ����ĸuһ��" << ucnt << "��" << endl;
    cout << "�ո�һ��" << spaceCnt << "��" << endl;
    cout << "�Ʊ��һ��" << tabCnt << "��" << endl;
    cout << "���з�һ��" << lineCnt << "��" << endl;

    return 0;
}