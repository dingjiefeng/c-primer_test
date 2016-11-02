/**
 * 8.4练习;
 * 编写函数，以读模式打开一个文件，将其内容读到
 * 一个string的vector中，将每一行作为一个独立元素存于vector中
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
        cerr << "创建文件失败" << endl;
        return -1;
    }
    out << "hello world" << endl;
    out << "this is my file" << endl;
    out << "this is my data" << endl;
    out.close();
    ifstream in(path+"data", ios::binary);
    if (!in)
    {
        cerr << "无法打开输入文件!" << endl;
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