/**
 * 3.17��ϰ��
 * 1.��cin����һ��ʲ������Ǵ���vector����
 * 2.�����дʶ���Ϊ��д��ʽ
 * 3.����ı��Ľ����ÿ����ռһ��
 */
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

/**
 * �����д����
 * @param vec
 */
void outPut(vector<string> vec) { for (auto &mem: vec) { for (auto &i: mem) { i = toupper(i); } cout << mem << endl; } }

int main()
{
    vector<string> svec;
    string stmp;
    char key;
    while (cin >> stmp)
    {
        svec.push_back(stmp);
        cout << "�Ƿ�������루y/n��" << endl;
        cin >> key;
        if (key != 'y')
        {
            break;
        }
        cout << "��������һ����" << endl;
    }
    cout << "ת���Ľ���ǣ�" << endl;
    outPut(svec);
    return 0;
}