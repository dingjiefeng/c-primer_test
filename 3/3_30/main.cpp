/**
 *3.31练习：
 * 1.定义含有10个int类型的数组，元素值等于其下标值
 */
#include <iostream>

using namespace std;
int main()
{
    int a[10] = {};
    //这里不能用sizeof（），sizeof返回的是字节数
    for (auto i = 0; i < 10; ++i)
    {
        a[i] = i;
    }
    for (auto j : a)
    {
        cout << j << " ";
    }
    
    return 0;
}