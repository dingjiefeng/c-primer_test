/*
 * 11.3以及11.4
 * 单及计数以及忽略特定单词计数
 */
#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include <cstdlib>

using namespace std;
string &pure(string &s)
{
    for(unsigned i = 0;i<s.size();++i)//这里用i!=s.size()会出错
    {
        cout << s.size() <<endl;
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] -= ('A' - 'a');
        }
        else if(s[i] == '.' )
        {
             s.erase(i,1);
        }
    }
    return s;
}
int main()
{
    /*
    //创建文件保存单词
    ofstream out("D:\\c-primer_test\\11\\11_4\\words.txt");
    vector<string> svec = {"hello","world","djf","hello","china","nanjing","china","hello","fast"};
    for (auto &wd : svec)
    {
        out << wd << " ";
    }
    out << endl;
    */
    map<string,size_t> word_cnt;
    string path = "D:\\c-primer_test\\11\\11_4\\";
    string fn = path + "words.txt";
    ifstream in(fn);
    if(!in)
    {
        cout << "打开文件失败！" << endl;
        exit(1);
    }
    string word;
    while (in >> word)
    {
        word = pure(word);
        word_cnt[word]++;
    }
    for (auto &atom : word_cnt)
    {
        cout << atom.first << "\t" << atom.second << "\n" ;
    }

    return 0;
}