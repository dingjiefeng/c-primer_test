/**
 * 5.6��ϰ��
 * ���ϴε���ϰ���������������
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

    score = (g1==9)?"A":
            (g1==8)?"B":
            (g1==7)?"C":"D";
    level = (g0<3)?"-":
            (g0>7)?"+":"";


    lettergrade = "�ɼ��ȼ���" + score + level;
    cout << lettergrade << endl;

    return 0;
}