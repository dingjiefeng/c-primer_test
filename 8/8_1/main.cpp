/**
 * 8.1练习：
 * 编写函数，接受一个istream&参数，返回值类型也是 istream&。
 * 此函数须从给定流中读取数据，直至遇到文件结束标识时停止。
 * 它将读取的数据打印到标准输出上。完成操作后，在返回流之前，对流进行复位，使其处于有效状态。
 */
#include <iostream>

using namespace std;

istream & readIn(istream & is)
{
    int buf = 0;
    while (is >> buf, !is.eof())
    {
        if (is.bad())
        {
            throw runtime_error("IO流错误");
        }
        if (is.fail())
        {
            cerr << "数据错误，请重试：" << endl;
            is.clear();
            is.ignore(100, '\n');
            //含义是把缓冲区内从当前字符开始知道'\n'之前字符（如果有100个的话）忽略掉，
            // 实际上你这里假设一行不会超过1000个字符，所以含义是忽略一行
            continue;
        }
        cout << buf << endl;
    }
    is.clear();
    return is;
}
int main()
{
    cout << "输入一些数字，以ctrl+z结束:" << endl;//ctrl+z是文件结束符
    readIn(cin);
    return 0;
}