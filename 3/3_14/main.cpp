/**
 * 3.14��3.15��ϰ
 */
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int chos = 0;
    char key = 0;
    vector<int> ivec;
    vector<string> svec;
    int itmp;
    string stmp;
    cout<<"������������1�������ַ�������2��"<<endl;
    cin>>chos;
    if (chos==1)
    {
        cout<<"������һ�����ͣ�"<<endl;
        while (cin>>key)
        {
            ivec.push_back(itmp);
            cout<<"�Ƿ������y/n����"<<endl;
            cin>>key;
            if (key=='n')
                break;
        }

    } else if (chos==2)
    {
        cout<<"������һ���ַ�����"<<endl;
        while (cin>>stmp)
        {
            svec.push_back(stmp);
            cout<<"�Ƿ������y/n����"<<endl;
            //������һ��©�����������롰2 n�����ߡ�1 2 n��������n��β��
            //�ͻ�ֱ��ִ�е�break������ķ����ܼ򵥣���ѭ���ṹ�޸��¾Ϳ���
            //����ֻ��С���ܣ��Ͳ��������
            cin>>key;
            if (key=='n')
                break;
        }
    } else
    {
        cerr<<"�������"<<endl;
        return -1;
    }
    return 0;
}