/**
 * 3.36��ϰ��
 * 1.��дһ�γ��򣬱Ƚ����������Ƿ����
 *  ˵�������ȱȽ��������vector�ĳ���
 *  ������ȵ����������һ�Ƚ϶��ߵĶ�ӦԪ��
 */
#include <iostream>

using namespace std;
int main()
{
    //part 1 ��ʼ���������飬�������������������
    const int sz = 5;
    int a[sz] = {1,2,3,4,5};
    int b[sz] = {1,2,3,4,5};//{54,23,44,66,22};
    //part 2 �Ƚ϶��ߵĳ���,�����߼����е����⣬��Ϊ�������鳤�ȿ϶�����ȵ�
    if (sizeof(a) != sizeof(b))
    {
        cout << "�������鲻���" << endl;
    } else
    {
        int cnt = 0;
        for (int i = 0; i != sz; ++i)
        {
            if (*(a + i) == *(b + i))
            {
                ++cnt;
            }
        }
        if (cnt == sizeof(a) / sizeof(a[1]))
        {
            cout << "���������" << endl;
        } else
        {
            cout << "�����鲻��" << endl;
        }
    }
    //part 3 ��һ�Ƚ϶�ӦԪ��
    return 0;
}