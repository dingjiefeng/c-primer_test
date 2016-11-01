/**
 * 7.3练习：
 * 结合7.2中的新定义的类，修改7.1.1节的交易处理程序
 */
#include <iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
    cout << "请输入交易记录（ISBN、销售量、单价,以空格隔开）:" << endl;
    Sales_data t;
    if (Sales_read(cin,t))
    {
        Sales_data buf;
        while (Sales_read(cin, buf))
        {
            if (t.isbn() == buf.isbn())
            {
                t.combine(buf);
            } else
            {
                Sales_print(cout, t);
                t = buf;
            }
        }
        Sales_print(cout,t);
    } else
    {
        cerr << "请输入正确的数据!" << endl;
        return -1;
    }
    return 0;
}