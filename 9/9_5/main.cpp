/**
 * 9.5��ϰ��
 * ��Э��һ�⡣������һ��������ָ���ҵ���Ԫ��
 * ע�⣬����Ӧ�ô���δ�ҵ������
 */
#include <iostream>
#include <vector>

using namespace std;
vector<int>::iterator findVector(vector<int>::iterator beg,vector<int>::iterator end, int var)
{
    for (auto i = beg; i != end ; ++i)
    {
        if (*i == var)
        {
            return i;
        }
    }
    return beg;
}
int main()
{
    vector<int> ivec{0,1,2,3,4,5,6,7,8};
    int tofind;
    cout << "��������ҵ�����" << endl;
    cin >> tofind;
    int res = findVector(ivec.begin(), ivec.end(), tofind) - ivec.begin();
    if (res)
    {
        cout << "�ҵ��ˣ��ǵ�" << res << "��Ԫ��" << endl;
    } else
    {
        cout << "û�ҵ���" << endl;
    }
    return 0;
}