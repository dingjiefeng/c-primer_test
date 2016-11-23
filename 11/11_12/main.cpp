#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
int main(int argc,char *argv)
{
    ifstream in((const char *) argv[1]);
    if(!in)
    {
        printf("----fail to open file !-----");
        return -1;
    }
    vector<pair<string,int>> data;
    string s;
    int v;
    while (in >> s && in >> v)
    {
        data.push_back(pair<string, int>(s, v));
    }
    for (auto &d : data)
    {
        cout << d.first << " " << d.second << endl;
    }
    return 0;
}