/**
 * 5.6练习：
 * 将上次的练习用条件运算符代替
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

    score = (g1==9)?"A":
            (g1==8)?"B":
            (g1==7)?"C":"D";
    level = (g0<3)?"-":
            (g0>7)?"+":"";


    lettergrade = "成绩等级是" + score + level;
    cout << lettergrade << endl;

    return 0;
}