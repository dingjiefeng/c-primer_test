/**
 * 3.14与3.15练习
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
    cout<<"输入整型输入1，输入字符串输入2："<<endl;
    cin>>chos;
    if (chos==1)
    {
        cout<<"请输入一组整型："<<endl;
        while (cin>>key)
        {
            ivec.push_back(itmp);
            cout<<"是否继续（y/n）："<<endl;
            cin>>key;
            if (key=='n')
                break;
        }

    } else if (chos==2)
    {
        cout<<"请输入一组字符串："<<endl;
        while (cin>>stmp)
        {
            svec.push_back(stmp);
            cout<<"是否继续（y/n）："<<endl;
            //这里有一个漏洞，比如输入“2 n”或者“1 2 n”这样以n结尾的
            //就会直接执行到break，解决的方法很简单，把循环结构修改下就可以
            //这里只是小功能，就不继续深究了
            cin>>key;
            if (key=='n')
                break;
        }
    } else
    {
        cerr<<"输入错误！"<<endl;
        return -1;
    }
    return 0;
}