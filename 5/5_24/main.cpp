/**
 * 5.24��ϰ��
 * �ӱ�׼�����ж�ȡ��������
 * �����һ�������Եڶ�������������Ϊ0ʱʹ��try-catch�׳��쳣
 */
#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    cout << "����������������" << endl;
    int ivar1 = 0,ivar2= 0;
    /*
    cin >> ivar1 >> ivar2;
    if (ivar2 != 0)
    {
        cout << "������:" << ivar1 / ivar2 << endl;
    } else
    {
        throw runtime_error("��������Ϊ0");
    }
     */
    while (cin>>ivar1>>ivar2)
    {
        try
        {
            if (ivar2 != 0)
            {
                cout << "������:" << ivar1 / ivar2 << endl;
            } else
                throw runtime_error("��������Ϊ0");
        }catch (runtime_error err)
        {
            cout << err.what() << endl;
            cout << "�Ƿ������y/n��" << endl;
            char key;
            cin >> key;
            if (key == 'y' && key=='Y')
            {
                break;
            }
        }

    }

    return 0;
}