/**
 * 3.43��ϰ
 * 1.��д�����汾�ĳ��򣬾������ia��Ԫ��
 * 2.�汾1ʹ�÷�Χfor�����������
 * 3.�汾2�Ͱ汾3��ʹ����ͨ��forѭ�������а汾2Ҫ�����±꣬�汾3Ҫ��
 * ��ָ��
 * 4.���������汾�ж�����ֱ��д���������ͣ�����ʹ�����ͱ�����auto����decltype�ؼ���
 */
#include <iostream>

using namespace std;
/**
 * �汾1��ʹ�÷�Χforѭ�����a��Ԫ��
 * @param a
 * @param len
 */
/************************ע�⣡����*************************/
//c++Ĭ��������Ϊ�����Ĳ���ʱ�����е��Ǵ�ַ���������Ǵ��Σ��������ʱ����
//����ֱ����a�ᱨ����ʶ��Ϊ������׵�ַ�����Ҫ����ת��Ϊ�������
//�������http://blog.csdn.net/sarkuya/article/details/6554538
void output1(int a[][4], int len) {
    cout << "�汾1" << endl;
    int ia[len][4];
    for (int j = 0; j != len; ++j)
    {
        for (int i = 0; i != 4; ++i)
        {
            ia[j][i] = a[j][i];
        }
    }
    for (int (&i)[4] : ia)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
    }
    cout << endl;
}

/**
 * �汾2����forѭ���Լ��±�
 * @param a
 * @param len
 */
void output2(int a[][4], int len){
    cout << "�汾2" << endl;
    int ia[len][4];int cnt = 0;
    for (int j = 0; j != len; ++j)
    {
        for (int i = 0; i != 4; ++i)
        {
            ia[j][i] = a[j][i];
        }
    }
    for (int i = 0; i != len*4; ++i)
    {
        cout << ia[i/4][i%4] << " ";
    }
    cout << endl;
}
/**
 * �汾3����forѭ���Լ�ָ��
 * @param a
 * @param len
 */
void output3(int a[][4], int len){
    cout << "�汾3" << endl;
    int ia[len][4];int cnt = 0;
    for (int j = 0; j != len; ++j)
    {
        for (int i = 0; i != 4; ++i)
        {
            ia[j][i] = a[j][i];
        }
    }
    for (int (*k)[4] = ia; k != ia + len; ++k)
    {
        for (int *i = *k; i != *k + 4; ++i)
        {
            cout << *i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    output1(ia, sizeof(ia)/ sizeof(ia[0]));
    output2(ia, sizeof(ia)/ sizeof(ia[0]));
    output3(ia, sizeof(ia)/ sizeof(ia[0]));

    return 0;
}