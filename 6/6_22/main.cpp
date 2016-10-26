/**
 * 6.22练习：
 * 编写一个函数
 * 交换两个int型指针所指得值
 */
#include <iostream>

using namespace std;
void mySwap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a = 1,b = 2;
    cout << a << b << endl;
    mySwap(&a,&b);
    cout << a << b << endl;

    return 0;
}