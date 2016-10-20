/**
 * 5.5练习：
 * 写一段自己的程序，用ifelse语句实现把数字成绩转换成字母成绩的要求
 */
#include <iostream>

using namespace std;
int main()
{
    int grade = 0;
    cout << "请输入成绩" << endl;
    cin >> grade;
    if (grade < 0 || grade > 100)
    {
        cout << "成绩不合法" << endl;
        return -1;
    }
    if (grade == 100)
    {
        cout << "成绩等级是" << "A++" << endl;
    }
    if (grade < 60)
    {
        cout << "成绩等级是" << "F" << endl;
    }
    int g0 = grade % 10;
    int g1 = grade / 10;
    string score,level,lettergrade;

    if (g1 == 9) score = "A"; else if (g1 == 8) score = "B"; else if (g1 == 7) score = "C"; else score = "D";

    if (g0 < 3) level = "-"; else if (g0 > 7) level = "+"; else level = "";

    lettergrade = "成绩等级是" + score + level;
    cout << lettergrade << endl;

    return 0;
}