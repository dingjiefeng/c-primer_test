/**
 * 5.11练习：
 * 修改5.10，增加识别空格、制表符、换行符功能
 */
#include <iostream>

using namespace std;
int main()
{
    string str;
    int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
    int spaceCnt = 0, tabCnt = 0, lineCnt = 0;

    cout << "请输入一串字母" << endl;
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
    cout << "元音字母a一共" << acnt << "个" << endl;
    cout << "元音字母e一共" << ecnt << "个" << endl;
    cout << "元音字母i一共" << icnt << "个" << endl;
    cout << "元音字母o一共" << ocnt << "个" << endl;
    cout << "元音字母u一共" << ucnt << "个" << endl;
    cout << "空格一共" << spaceCnt << "个" << endl;
    cout << "制表符一共" << tabCnt << "个" << endl;
    cout << "换行符一共" << lineCnt << "个" << endl;

    return 0;
}