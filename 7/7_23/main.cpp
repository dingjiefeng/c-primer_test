/**
 * 7.23��ϰ��
 * ��дһ��Screen��
 * Ϊ�˷��㣬�������иĽ�Screen��Ĳ�����������ļ����޸�
 */
#include <iostream>
#include "Screen.h"
using namespace std;
int main()
{
    Screen myScreen(5,5,'c');
    myScreen.move(1,0).set('b').display(cout);
    cout << endl;
    myScreen.display(cout);
    cout << endl;
    cout << myScreen.size() << endl;

    return 0;
}