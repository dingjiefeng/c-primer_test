/**
 *3.31��ϰ��
 * 1.���庬��10��int���͵����飬Ԫ��ֵ�������±�ֵ
 */
#include <iostream>

using namespace std;
int main()
{
    int a[10] = {};
    //���ﲻ����sizeof������sizeof���ص����ֽ���
    for (auto i = 0; i < 10; ++i)
    {
        a[i] = i;
    }
    for (auto j : a)
    {
        cout << j << " ";
    }
    
    return 0;
}