/**
 * 5.12练习
 * 修改元音字母的程序，加入对ff，fi，fl的识别
 * 形如ffi的形式，算作有一个ff一个fi以及一个i
 * 预计效果如下：
 * 输入：ffififfl
 * 输出：
 * ff的个数是2个
 * fi的个数是2个
 * fl的个数是1个
 * i的个数是2个
 */

#include <iostream>

using namespace std;
int main()
{
    string str;
    int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
    int ffcnt = 0, flcnt = 0, ficnt = 0;
    bool fflag = 0;
    cout << "请输入一段字母" << endl;
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

    cout << "ff的个数是" << ffcnt << "个" << endl;
    cout << "fi的个数是" << ficnt << "个" << endl;
    cout << "fl的个数是" << flcnt << "个" << endl;
    cout << "i的个数是" << icnt << "个" << endl;


    return 0;
}