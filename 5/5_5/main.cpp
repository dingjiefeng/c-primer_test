/**
 * 5.5��ϰ��
 * дһ���Լ��ĳ�����ifelse���ʵ�ְ����ֳɼ�ת������ĸ�ɼ���Ҫ��
 */
#include <iostream>

using namespace std;
int main()
{
    int grade = 0;
    cout << "������ɼ�" << endl;
    cin >> grade;
    if (grade < 0 || grade > 100)
    {
        cout << "�ɼ����Ϸ�" << endl;
        return -1;
    }
    if (grade == 100)
    {
        cout << "�ɼ��ȼ���" << "A++" << endl;
    }
    if (grade < 60)
    {
        cout << "�ɼ��ȼ���" << "F" << endl;
    }
    int g0 = grade % 10;
    int g1 = grade / 10;
    string score,level,lettergrade;

    if (g1 == 9) score = "A"; else if (g1 == 8) score = "B"; else if (g1 == 7) score = "C"; else score = "D";

    if (g0 < 3) level = "-"; else if (g0 > 7) level = "+"; else level = "";

    lettergrade = "�ɼ��ȼ���" + score + level;
    cout << lettergrade << endl;

    return 0;
}