/**
 * 5.12��ϰ
 * �޸�Ԫ����ĸ�ĳ��򣬼����ff��fi��fl��ʶ��
 * ����ffi����ʽ��������һ��ffһ��fi�Լ�һ��i
 * Ԥ��Ч�����£�
 * ���룺ffififfl
 * �����
 * ff�ĸ�����2��
 * fi�ĸ�����2��
 * fl�ĸ�����1��
 * i�ĸ�����2��
 */

#include <iostream>

using namespace std;
int main()
{
    string str;
    int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
    int ffcnt = 0, flcnt = 0, ficnt = 0;
    bool fflag = 0;
    cout << "������һ����ĸ" << endl;
    cin >> str;
    for (auto i = str.begin(); i != str.end(); ++i)
    {
        if (fflag == 1)
        {
            switch (*i)
            {
                case 'f':
                    ++ffcnt;
                    break;
                case 'i':
                    ++ficnt;fflag = 0;
                    break;
                case 'l':
                    ++flcnt;fflag = 0;
                    break;
                default:
                    break;
            }

        }

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
            case 'f':
                fflag = 1;
                break;
            default:
                break;
        }



    }

    cout << "ff�ĸ�����" << ffcnt << "��" << endl;
    cout << "fi�ĸ�����" << ficnt << "��" << endl;
    cout << "fl�ĸ�����" << flcnt << "��" << endl;
    cout << "i�ĸ�����" << icnt << "��" << endl;


    return 0;
}