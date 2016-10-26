/**
 * 6.4练习：
 * 编写一个函数和用户交互，计算用户输入的数字的阶乘
 * 0的阶乘为1
 */
#include <iostream>
using namespace std;
void cal(){
    cout << "请输入一个整数" << endl;
    int t = 0;
    int res = 1;
    cin >> t;
    while (t)
    {
        res *= t;
        --t;
    }
    cout << "计算结果为" << res << endl;
}

int main()
{
    cal();

    return 0;
}