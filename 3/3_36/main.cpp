/**
 * 3.36练习：
 * 1.编写一段程序，比较两个数组是否相等
 *  说明：首先比较数组或者vector的长度
 *  长度相等的情况下再逐一比较二者的对应元素
 */
#include <iostream>

using namespace std;
int main()
{
    //part 1 初始化两个数组，这里随便输入两个数组
    const int sz = 5;
    int a[sz] = {1,2,3,4,5};
    int b[sz] = {1,2,3,4,5};//{54,23,44,66,22};
    //part 2 比较二者的长度,这里逻辑上有点问题，因为两个数组长度肯定是相等的
    if (sizeof(a) != sizeof(b))
    {
        cout << "两个数组不相等" << endl;
    } else
    {
        int cnt = 0;
        for (int i = 0; i != sz; ++i)
        {
            if (*(a + i) == *(b + i))
            {
                ++cnt;
            }
        }
        if (cnt == sizeof(a) / sizeof(a[1]))
        {
            cout << "两数组相等" << endl;
        } else
        {
            cout << "两数组不等" << endl;
        }
    }
    //part 3 逐一比较对应元素
    return 0;
}