/**
 * 7.3��ϰ��
 * ���7.2�е��¶�����࣬�޸�7.1.1�ڵĽ��״������
 */
#include <iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
    cout << "�����뽻�׼�¼��ISBN��������������,�Կո������:" << endl;
    Sales_data t;
    if (Sales_read(cin,t))
    {
        Sales_data buf;
        while (Sales_read(cin, buf))
        {
            if (t.isbn() == buf.isbn())
            {
                t.combine(buf);
            } else
            {
                Sales_print(cout, t);
                t = buf;
            }
        }
        Sales_print(cout,t);
    } else
    {
        cerr << "��������ȷ������!" << endl;
        return -1;
    }
    return 0;
}