/**
 * 9.4��ϰ��
 * ��д����������һ��ָ��vector<int>�ĵ�������һ��intֵ��
 * ��������������Χ�ڲ���ָ����ֵ������һ������ֵָ���Ƿ��ҵ�
 */
#include <iostream>
#include <vector>

using namespace std;

bool findVector(vector<int>::iterator beg,vector<int>::iterator end, int var)
{
    bool res = 0;
    for (auto i = beg; i != end; ++i)
    {
        if (*i == var)
            res = 1;
    }
    return res;
}
int main()
{
    int tofind;
    vector<int> ivec{0,1,2,3,4,5,6,7};
    cout << "������һ�������ҵ�����ֵ��" << endl;
    cin >> tofind;
    if (findVector(ivec.begin(), ivec.end(), tofind))
    {
        cout << "�ҵ��ˣ�" << endl;
    } else
    {
        cout << "û���ҵ���" << endl;
    }
    return 0;
}