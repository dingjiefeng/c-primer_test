/**
 * 3.23��ϰ��
 * 1.����һ������10��������vector
 * 2.ʹ�õ�������������Ϊԭ�����������
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    for (auto i = ivec.begin(); i != ivec.end(); ++i)
    {
        *i = 2*(*i);
        cout << *i << " ";
    }
    return 0;
}