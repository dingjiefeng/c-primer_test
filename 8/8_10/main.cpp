/**
 * 8.10��ϰ��
 * ��д���򣬽�����һ���ļ��е��б�����һ��vector<string>��
 * Ȼ��ʹ��һ��istringstream��vector��ȡ����Ԫ��ÿ�ζ�һ������
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;
int main()
{
    string path = "D:\\c-primer_test\\8\\8_10\\";
    ifstream fin(path+"data",ios::in);
    if (!fin)
    {
        cerr << "���ļ�ʧ�ܣ�" << endl;
        return -1;
    }

    vector<string> svec;
    string stmp;
    while (getline(fin, stmp))
    {
        svec.push_back(stmp);
    }
    fin.close();
    istringstream w;
    string word;
    for (auto &a : svec)
    {
        w.str(a);
        while (w >> word)
        {
            cout << word << " ";
        }
    }


    return 0;
}