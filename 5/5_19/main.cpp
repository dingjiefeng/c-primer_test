/**
 * 5.19��ϰ��
 * ��do while���ӱ�׼�����ж�ȡstring����
 * �Ƚ�֮�󽫳��ȱȽ϶̵����
 */
#include <iostream>

using namespace std;
int main()
{
    do{
        cout << "�����������ַ������Իس���������" << endl;
        string strLn1,strLn2;
        cin >> strLn1 >> strLn2;
        if (strLn1.size() < strLn2.size())
        {
            cout << "���Ƚ϶̵��ǣ�" << strLn1 << endl;
        } else if (strLn1.size() > strLn2.size())
        {
            cout << "���Ƚ϶̵��ǣ�" << strLn2 << endl;
        } else
        {
            cout << "�����ַ����ȳ�" << endl;
        }
    }while (cin);

    return 0;
}