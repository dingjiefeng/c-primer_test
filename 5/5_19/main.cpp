/**
 * 5.19练习：
 * 用do while语句从标准输入中读取string对象，
 * 比较之后将长度比较短的输出
 */
#include <iostream>

using namespace std;
int main()
{
    do{
        cout << "请输入两个字符串，以回车键结束：" << endl;
        string strLn1,strLn2;
        cin >> strLn1 >> strLn2;
        if (strLn1.size() < strLn2.size())
        {
            cout << "长度较短的是：" << strLn1 << endl;
        } else if (strLn1.size() > strLn2.size())
        {
            cout << "长度较短的是：" << strLn2 << endl;
        } else
        {
            cout << "两个字符串等长" << endl;
        }
    }while (cin);

    return 0;
}