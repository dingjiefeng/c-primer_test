/**
 * 3.17练习：
 * 1.从cin读入一组词并把他们存入vector对象
 * 2.将所有词都改为大写形式
 * 3.输出改变后的结果，每个词占一行
 */
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

/**
 * 输出大写单词
 * @param vec
 */
void outPut(vector<string> vec) { for (auto &mem: vec) { for (auto &i: mem) { i = toupper(i); } cout << mem << endl; } }

int main()
{
    vector<string> svec;
    string stmp;
    char key;
    while (cin >> stmp)
    {
        svec.push_back(stmp);
        cout << "是否继续输入（y/n）" << endl;
        cin >> key;
        if (key != 'y')
        {
            break;
        }
        cout << "请输入下一个词" << endl;
    }
    cout << "转换的结果是：" << endl;
    outPut(svec);
    return 0;
}