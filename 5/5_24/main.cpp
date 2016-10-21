/**
 * 5.24练习：
 * 从标准输入中读取两个整数
 * 输出第一个数除以第二个数，被除数为0时使用try-catch抛出异常
 */
#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    cout << "请输入两个整数：" << endl;
    int ivar1 = 0,ivar2= 0;
    /*
    cin >> ivar1 >> ivar2;
    if (ivar2 != 0)
    {
        cout << "相除结果:" << ivar1 / ivar2 << endl;
    } else
    {
        throw runtime_error("除数不能为0");
    }
     */
    while (cin>>ivar1>>ivar2)
    {
        try
        {
            if (ivar2 != 0)
            {
                cout << "相除结果:" << ivar1 / ivar2 << endl;
            } else
                throw runtime_error("除数不能为0");
        }catch (runtime_error err)
        {
            cout << err.what() << endl;
            cout << "是否继续（y/n）" << endl;
            char key;
            cin >> key;
            if (key == 'y' && key=='Y')
            {
                break;
            }
        }

    }

    return 0;
}