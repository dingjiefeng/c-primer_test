/**
 * 8.1��ϰ��
 * ��д����������һ��istream&����������ֵ����Ҳ�� istream&��
 * �˺�����Ӹ������ж�ȡ���ݣ�ֱ�������ļ�������ʶʱֹͣ��
 * ������ȡ�����ݴ�ӡ����׼����ϡ���ɲ������ڷ�����֮ǰ���������и�λ��ʹ�䴦����Ч״̬��
 */
#include <iostream>

using namespace std;

istream & readIn(istream & is)
{
    int buf = 0;
    while (is >> buf, !is.eof())
    {
        if (is.bad())
        {
            throw runtime_error("IO������");
        }
        if (is.fail())
        {
            cerr << "���ݴ��������ԣ�" << endl;
            is.clear();
            is.ignore(100, '\n');
            //�����ǰѻ������ڴӵ�ǰ�ַ���ʼ֪��'\n'֮ǰ�ַ��������100���Ļ������Ե���
            // ʵ�������������һ�в��ᳬ��1000���ַ������Ժ����Ǻ���һ��
            continue;
        }
        cout << buf << endl;
    }
    is.clear();
    return is;
}
int main()
{
    cout << "����һЩ���֣���ctrl+z����:" << endl;//ctrl+z���ļ�������
    readIn(cin);
    return 0;
}