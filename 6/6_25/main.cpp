/**
 * 6.25练习：
 * 编写main函数
 * 将输入的两个实参合在一起变成一个string输出
 */
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    string str;
    for (int i = 1; i != argc; ++i)
    {
        str += argv[i];
    }
    cout << str << endl;

    return 0;
}