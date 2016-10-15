/**
 * 3.43练习
 * 1.编写三个版本的程序，均能输出ia的元素
 * 2.版本1使用范围for管理迭代过程
 * 3.版本2和版本3都使用普通的for循环，其中版本2要求用下标，版本3要求
 * 用指针
 * 4.此外三个版本中都必须直接写出数据类型，不能使用类型别名、auto或者decltype关键字
 */
#include <iostream>

using namespace std;
/**
 * 版本1：使用范围for循环输出a的元素
 * @param a
 * @param len
 */
/************************注意！！！*************************/
//c++默认数组作为函数的参数时，进行的是传址操作，不是传参，所以这个时候函数
//里面直接用a会报错，会识别为数组的首地址，因此要将其转化为数组参数
//具体见：http://blog.csdn.net/sarkuya/article/details/6554538
void output1(int a[][4], int len) {
    cout << "版本1" << endl;
    int ia[len][4];
    for (int j = 0; j != len; ++j)
    {
        for (int i = 0; i != 4; ++i)
        {
            ia[j][i] = a[j][i];
        }
    }
    for (int (&i)[4] : ia)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
    }
    cout << endl;
}

/**
 * 版本2，用for循环以及下标
 * @param a
 * @param len
 */
void output2(int a[][4], int len){
    cout << "版本2" << endl;
    int ia[len][4];int cnt = 0;
    for (int j = 0; j != len; ++j)
    {
        for (int i = 0; i != 4; ++i)
        {
            ia[j][i] = a[j][i];
        }
    }
    for (int i = 0; i != len*4; ++i)
    {
        cout << ia[i/4][i%4] << " ";
    }
    cout << endl;
}
/**
 * 版本3，用for循环以及指针
 * @param a
 * @param len
 */
void output3(int a[][4], int len){
    cout << "版本3" << endl;
    int ia[len][4];int cnt = 0;
    for (int j = 0; j != len; ++j)
    {
        for (int i = 0; i != 4; ++i)
        {
            ia[j][i] = a[j][i];
        }
    }
    for (int (*k)[4] = ia; k != ia + len; ++k)
    {
        for (int *i = *k; i != *k + 4; ++i)
        {
            cout << *i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    output1(ia, sizeof(ia)/ sizeof(ia[0]));
    output2(ia, sizeof(ia)/ sizeof(ia[0]));
    output3(ia, sizeof(ia)/ sizeof(ia[0]));

    return 0;
}