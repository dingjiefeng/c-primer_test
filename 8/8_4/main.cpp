/**
 * 8.4��ϰ;
 * ��д�������Զ�ģʽ��һ���ļ����������ݶ���
 * һ��string��vector�У���ÿһ����Ϊһ������Ԫ�ش���vector��
 */
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


int main()
{
    string path = "D:\\c-primer_test\\8\\8_4\\";
    ofstream out;
    out.open(path+"data", ios::trunc);
    if (!out)
    {
        cerr << "�����ļ�ʧ��" << endl;
        return -1;
    }
    out << "hello world" << endl;
    out << "this is my file" << endl;
    out << "this is my data" << endl;
    out.close();
    ifstream in(path+"data", ios::binary);
    if (!in)
    {
        cerr << "�޷��������ļ�!" << endl;
        return -1;
    }
    string line;
    vector<string> readIn;
    while (getline(in, line))
    {
        readIn.push_back(line);
    }
    in.close();
    for (auto &buf : readIn)
    {
        cout << buf << endl;
    }

    return 0;
}