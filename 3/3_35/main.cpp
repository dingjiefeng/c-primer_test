/**
 * 3.35��ϰ��
 * ����ָ�뽫�����е�Ԫ����Ϊ0
 */
#include <iostream>

using namespace std;
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = a;
    for (int i = 0; i != 10; ++i)
    {
        cout << *(p + i) << " ";
        *(p+i) = 0;
    }
    cout << endl;
    for (int j = 0; j < 10; ++j)
    {
        cout << *(p + j) << " ";
    }
    return 0;
}