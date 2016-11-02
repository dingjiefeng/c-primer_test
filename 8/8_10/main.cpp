/**
 * 8.10练习：
 * 编写程序，将来自一个文件中的行保存在一个vector<string>中
 * 然后使用一个istringstream从vector读取数据元素每次读一个单词
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
        cerr << "打开文件失败！" << endl;
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