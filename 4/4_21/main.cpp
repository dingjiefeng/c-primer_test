/**
 * 4.21��ϰ��
 * ʹ�������������vector<int>���ҵ���ЩԪ�ص�ֵ��������
 * Ȼ����Щ����ֵ����
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> ivec{1,2,3,4,5};
    cout << "ԭ����" << endl;
    for (auto j = ivec.begin(); j != ivec.end(); ++j)
    {
        cout << *j << " ";
    }
    cout << endl;
    for (auto &i : ivec)
    {
        i = (i % 2 == 1) ? (i * 2) : (i);
    }
    cout << "����������" << endl;
    for (auto j = ivec.begin(); j != ivec.end(); ++j)
    {
        cout << *j << " ";
    }
    cout << endl;
    return 0;
}